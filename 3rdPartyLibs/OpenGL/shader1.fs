#version 330 core
// this shader is designed to render texture on the screen
out vec4 FragColor;

in vec3 ourColor;
in vec2 TexCoord;

// texture sampler
uniform sampler2D texture0;
uniform int patternIdx;
//uniform int yDivide;



// TODO: can the above be passed in one variable?

//rotation angle
uniform float theta;
//x-distance & y-distance
uniform float xDis;
uniform float yDis;

//patch center
uniform float centerX;
uniform float centerY;

void main()
{
	
	
	

	vec2 v = TexCoord.xy;
	v.x = centerX + (TexCoord.x - centerX) * cos(theta) + (TexCoord.y - centerY) * sin(theta);
	v.y = centerY + (TexCoord.x - centerX) * -sin(theta) + (TexCoord.y - centerY) * cos(theta);
	//v.x = TexCoord.x *  cos(theta) + TexCoord.y * sin(theta);
	//v.y = TexCoord.x * -sin(theta) + TexCoord.y * cos(theta);

	//gl_FragCoord.xy = v;
	vec4 texColor =  texture(texture0, v);



	FragColor = texColor;
	
	
}

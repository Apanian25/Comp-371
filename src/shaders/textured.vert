#version 330 core

layout (location = 0) in vec3 aPos;
layout (location = 3) in vec2 aUV;

uniform mat4 modelMatrix = mat4(1.0);
uniform mat4 viewMatrix = mat4(1.0);
uniform mat4 projectionMatrix = mat4(1.0);

uniform vec2 uvScale = vec2(1.0, 1.0);

out vec2 texCoords;

void main()
{
    gl_Position = projectionMatrix * viewMatrix * modelMatrix * vec4(aPos, 1.0);
    texCoords = aUV * uvScale;
}

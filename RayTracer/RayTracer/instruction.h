#pragma once
enum class Operations
{
	rotateX,
	rotateY,
	rotateZ,
	NONE
};


struct Instrucion
{
	Operations op{Operations::NONE};
	int index{-2};
	float amount{0};
};
#include "IntersectionData.h"

IntersectionData::IntersectionData(bool intersectionState, float distance) :
	intersectionState{ intersectionState },
	distance{ distance }
{

}

bool IntersectionData::getIntersectionState()
{
	return this->intersectionState;
}

float IntersectionData::getIntersectionDistance()
{
	return this->distance;
}

void IntersectionData::setIntersectionState(bool intersectionState)
{
	this->intersectionState = intersectionState;
}

void IntersectionData::setIntersectionDistance(float distance)
{
	this->distance = distance;
}
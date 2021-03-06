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

const DirectX::XMFLOAT3 IntersectionData::getLtoRNormed() const
{
	return this->mLtoRNormed;
}

void IntersectionData::setLtoRNormed(const DirectX::XMFLOAT3& ltoRNormed)
{
	this->mLtoRNormed = ltoRNormed;
}

void IntersectionData::setLtoRNormed(float x, float y, float z)
{
	this->mLtoRNormed.x = x;
	this->mLtoRNormed.y = y;
	this->mLtoRNormed.z = z;
}

void IntersectionData::setIntersectionState(bool intersectionState)
{
	this->intersectionState = intersectionState;
}

void IntersectionData::setIntersectionDistance(float distance)
{
	this->distance = distance;
}

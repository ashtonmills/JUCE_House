/*
  ==============================================================================

    GrassComponent.cpp
    Created: 9 Sep 2019 11:30:13pm
    Author:  User

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "GrassComponent.h"

//==============================================================================
GrassComponent::GrassComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

GrassComponent::~GrassComponent()
{
}

void GrassComponent::paint (Graphics& g)
{
	g.setColour(Colours::greenyellow);
	g.drawLine(10, 325, getWidth() - 10, 325, 10);
}

void GrassComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}

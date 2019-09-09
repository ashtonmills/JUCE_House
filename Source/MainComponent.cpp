/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    setSize (600, 400);
	addAndMakeVisible(wall);
	addAndMakeVisible(grass);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{

}

void MainComponent::resized()
{
	wall.setBounds(getLocalBounds());
	grass.setBounds(getLocalBounds());
}

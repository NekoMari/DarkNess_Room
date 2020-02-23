#pragma once
#include "Resource.hpp"

enum SOUNDTRACK {
	Sound1 = 0, Sound2, Sound3, Sound4, Sound5,
	Sound6, Sound7, Sound8, Sound9, Sound10,
	Sound11, Sound12, Sound13, Sound14, Sound15,
	Sound16, Sound17, Sound18, Sound19, Sound20
};

static FMOD_SYSTEM* M_System;
static FMOD_SOUND* M_Sound[Sound20];
static FMOD_CHANNEL* M_Channel[Sound20];

void SoundInit();

void PlayStartBKSound();			//���� ���� ȭ�� BGM ���
void PlayGameBKSound();				//���� ���� ȭ�� BGM ���

void PlayLightningSound();			//���� �Ҹ� ���
void PlayButtonClickSound();		//��ư Ŭ�� �Ҹ� ���

void StartPageSoundStop();			//StartPage���� �߻��ϴ� ��� �Ҹ� ����
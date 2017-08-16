#ifndef __MAIN_CHAR_H__
#define __MAIN_CHAR_H__

#include "game_obj.h"
#include "redball_manager.h"

class MAIN_CHAR : public GAME_OBJ
{
protected:
	Camera *mCamera;
	Camera *mCameraSmall;
	Vector3 mEyePosition;
	REDBALL_MANAGER *mWeaponMgr;
	unsigned int mFireActionMode;
	int mCurBulletsNum;
	virtual void fireWeapon();
	
public:
	MAIN_CHAR(SceneManager *a_SceneMgr);
	virtual void attachCamera(Camera *a_Camera, Camera *b_Camera);
	virtual void walkForward(const Ogre::FrameEvent& evt);
	virtual void walkBackward(const Ogre::FrameEvent& evt);
	virtual void setWalkForward();
	virtual void setWalkBackward();
	void unsetWalkForward();
	virtual void unsetWalkBackward();
	virtual void update(const Ogre::FrameEvent& evt);
virtual void updateWeapon(const Ogre::FrameEvent& evt);
virtual void setFireAction_Normal();
virtual void setFireAction_None();
	virtual Vector3 getWeaponPosition() const;
virtual void updateViewDirection();
virtual void setMaxBulletsNum(int a_Num);
virtual void setVisible(bool flg);

REDBALL_MANAGER *getWeaponManager( );


};

#endif
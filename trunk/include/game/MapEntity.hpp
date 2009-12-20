/*
 * MapEntity.hpp
 *
 *  Created on: 16.12.2009
 *      Author: idstein
 */
#ifndef MAPENTITY_HPP_
#define MAPENTITY_HPP_

#include "Entity.hpp"
#include "../core/Resources.hpp"
#include "../resource/Facets.hpp"

namespace game {

	class MapEntity : public Entity {
		public:
			MapEntity( QPoint _offset, QPoint _pos, resource::Facets::MapTile& _data );
			void paint( QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget = 0 );
		private:
//			QSharedPointer<MapEntity> mSouth;
//			QSharedPointer<MapEntity> mEast;
//			QSharedPointer<MapEntity> mDown;
			resource::Facets::MapTile& mData;
			QSharedPointer<resource::Land> mLand;
	};
}


#endif /* MAPENTITY_HPP_ */

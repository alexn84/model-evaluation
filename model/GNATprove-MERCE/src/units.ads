--  copyright 2013 David MENTRE <d.mentre@fr.merce.mee.com>
--                                 -- Mitsubishi Electric R&D Centre Europe
--
--  Licensed under the EUPL V.1.1 or - as soon they will be approved by
--  the European Commission - subsequent versions of the EUPL (the
--  "Licence");
--  You may not use this work except in compliance with the Licence.
--
--  You may obtain a copy of the Licence at:
--
--    http://joinup.ec.europa.eu/software/page/eupl/licence-eupl
--
--  Unless required by applicable law or agreed to in writing, software
--  distributed under the Licence is distributed on an "AS IS" basis,
--  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
--  implied.
--
--  See the Licence for the specific language governing permissions and
--  limitations under the Licence.

package Units is
   -- FIXME: With GPL 2013 edition, try Dimension_System aspect
   --   http://www.adacore.com/adaanswers/gems/gem-136-how-tall-is-a-kilogram/

   -- For Breaking Curves computation
   type Speed_t is new Float; -- m/s unit
   type Speed_km_per_h_t is new Float; -- km/h unit
   type Acceleration_t is new Float; -- m/s**2 unit
   type Deceleration_t is new Float range 0.0..Float'Last; -- m/s**2 unit
   type Distance_t is new Natural; -- m unit
   type Time_t is new Float; -- s unit

   Maximum_Valid_Speed_km_per_h : constant Speed_km_per_h_t := 500.0;-- 500 km/h

   function m_per_s_From_km_per_h(Speed: Speed_km_per_h_t) return Speed_t
   with
     Pre => (Speed >= 0.0 and Speed <= Maximum_Valid_Speed_km_per_h);

   -- Pure function that fails with GNAT GPL 2012
--     function m_per_s_From_km_per_h_bis(Speed: Speed_km_per_h_t) return Speed_t
--     is
--        (Speed_t((Speed * 1000.0) / 3600.0))
--     with
--       Pre => (Speed >= 0.0 and Speed <= Maximum_Valid_Speed_km_per_h);

end Units;
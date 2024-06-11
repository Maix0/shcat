/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_977.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4885(t_small_parse_table_array *v)
{
	v->a[97700] = sym_arithmetic_expansion;
	v->a[97701] = sym_simple_expansion;
	v->a[97702] = sym_expansion;
	v->a[97703] = sym_command_substitution;
	v->a[97704] = 10;
	v->a[97705] = actions(3);
	v->a[97706] = 1;
	v->a[97707] = sym_comment;
	v->a[97708] = actions(3856);
	v->a[97709] = 1;
	v->a[97710] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[97711] = actions(3862);
	v->a[97712] = 1;
	v->a[97713] = sym_string_content;
	v->a[97714] = actions(3864);
	v->a[97715] = 1;
	v->a[97716] = anon_sym_DOLLAR_LBRACE;
	v->a[97717] = actions(3866);
	v->a[97718] = 1;
	v->a[97719] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4886(v);
}

void	small_parse_table_4886(t_small_parse_table_array *v)
{
	v->a[97720] = actions(3868);
	v->a[97721] = 1;
	v->a[97722] = anon_sym_BQUOTE;
	v->a[97723] = actions(4258);
	v->a[97724] = 1;
	v->a[97725] = anon_sym_DOLLAR;
	v->a[97726] = actions(4260);
	v->a[97727] = 1;
	v->a[97728] = anon_sym_DQUOTE;
	v->a[97729] = state(1987);
	v->a[97730] = 1;
	v->a[97731] = aux_sym_string_repeat1;
	v->a[97732] = state(2107);
	v->a[97733] = 4;
	v->a[97734] = sym_arithmetic_expansion;
	v->a[97735] = sym_simple_expansion;
	v->a[97736] = sym_expansion;
	v->a[97737] = sym_command_substitution;
	v->a[97738] = 4;
	v->a[97739] = actions(3);
	small_parse_table_4887(v);
}

void	small_parse_table_4887(t_small_parse_table_array *v)
{
	v->a[97740] = 1;
	v->a[97741] = sym_comment;
	v->a[97742] = actions(3906);
	v->a[97743] = 1;
	v->a[97744] = anon_sym_esac;
	v->a[97745] = actions(3908);
	v->a[97746] = 1;
	v->a[97747] = sym_extglob_pattern;
	v->a[97748] = actions(3904);
	v->a[97749] = 10;
	v->a[97750] = anon_sym_LPAREN;
	v->a[97751] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[97752] = anon_sym_DOLLAR;
	v->a[97753] = anon_sym_DQUOTE;
	v->a[97754] = sym_raw_string;
	v->a[97755] = sym_number;
	v->a[97756] = anon_sym_DOLLAR_LBRACE;
	v->a[97757] = anon_sym_DOLLAR_LPAREN;
	v->a[97758] = anon_sym_BQUOTE;
	v->a[97759] = sym_word;
	small_parse_table_4888(v);
}

void	small_parse_table_4888(t_small_parse_table_array *v)
{
	v->a[97760] = 3;
	v->a[97761] = actions(3);
	v->a[97762] = 1;
	v->a[97763] = sym_comment;
	v->a[97764] = actions(4074);
	v->a[97765] = 1;
	v->a[97766] = sym_extglob_pattern;
	v->a[97767] = actions(4070);
	v->a[97768] = 10;
	v->a[97769] = anon_sym_LPAREN;
	v->a[97770] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[97771] = anon_sym_DOLLAR;
	v->a[97772] = anon_sym_DQUOTE;
	v->a[97773] = sym_raw_string;
	v->a[97774] = sym_number;
	v->a[97775] = anon_sym_DOLLAR_LBRACE;
	v->a[97776] = anon_sym_DOLLAR_LPAREN;
	v->a[97777] = anon_sym_BQUOTE;
	v->a[97778] = sym_word;
	v->a[97779] = 3;
	small_parse_table_4889(v);
}

void	small_parse_table_4889(t_small_parse_table_array *v)
{
	v->a[97780] = actions(3);
	v->a[97781] = 1;
	v->a[97782] = sym_comment;
	v->a[97783] = actions(4112);
	v->a[97784] = 1;
	v->a[97785] = sym_extglob_pattern;
	v->a[97786] = actions(4108);
	v->a[97787] = 10;
	v->a[97788] = anon_sym_LPAREN;
	v->a[97789] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[97790] = anon_sym_DOLLAR;
	v->a[97791] = anon_sym_DQUOTE;
	v->a[97792] = sym_raw_string;
	v->a[97793] = sym_number;
	v->a[97794] = anon_sym_DOLLAR_LBRACE;
	v->a[97795] = anon_sym_DOLLAR_LPAREN;
	v->a[97796] = anon_sym_BQUOTE;
	v->a[97797] = sym_word;
	v->a[97798] = 3;
	v->a[97799] = actions(3);
	small_parse_table_4890(v);
}

/* EOF small_parse_table_977.c */

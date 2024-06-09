/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_748.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3740(t_small_parse_table_array *v)
{
	v->a[74800] = state(744);
	v->a[74801] = 1;
	v->a[74802] = sym_concatenation;
	v->a[74803] = actions(2903);
	v->a[74804] = 2;
	v->a[74805] = sym_raw_string;
	v->a[74806] = sym_word;
	v->a[74807] = state(348);
	v->a[74808] = 6;
	v->a[74809] = sym_arithmetic_expansion;
	v->a[74810] = sym_string;
	v->a[74811] = sym_number;
	v->a[74812] = sym_simple_expansion;
	v->a[74813] = sym_expansion;
	v->a[74814] = sym_command_substitution;
	v->a[74815] = 14;
	v->a[74816] = actions(3);
	v->a[74817] = 1;
	v->a[74818] = sym_comment;
	v->a[74819] = actions(933);
	small_parse_table_3741(v);
}

void	small_parse_table_3741(t_small_parse_table_array *v)
{
	v->a[74820] = 1;
	v->a[74821] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74822] = actions(935);
	v->a[74823] = 1;
	v->a[74824] = anon_sym_DOLLAR;
	v->a[74825] = actions(937);
	v->a[74826] = 1;
	v->a[74827] = anon_sym_DQUOTE;
	v->a[74828] = actions(939);
	v->a[74829] = 1;
	v->a[74830] = aux_sym_number_token1;
	v->a[74831] = actions(941);
	v->a[74832] = 1;
	v->a[74833] = aux_sym_number_token2;
	v->a[74834] = actions(943);
	v->a[74835] = 1;
	v->a[74836] = anon_sym_DOLLAR_LBRACE;
	v->a[74837] = actions(945);
	v->a[74838] = 1;
	v->a[74839] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3742(v);
}

void	small_parse_table_3742(t_small_parse_table_array *v)
{
	v->a[74840] = actions(947);
	v->a[74841] = 1;
	v->a[74842] = anon_sym_BQUOTE;
	v->a[74843] = actions(2925);
	v->a[74844] = 1;
	v->a[74845] = aux_sym_heredoc_redirect_token1;
	v->a[74846] = state(1348);
	v->a[74847] = 1;
	v->a[74848] = aux_sym__heredoc_command;
	v->a[74849] = state(1832);
	v->a[74850] = 1;
	v->a[74851] = sym_concatenation;
	v->a[74852] = actions(921);
	v->a[74853] = 2;
	v->a[74854] = sym_raw_string;
	v->a[74855] = sym_word;
	v->a[74856] = state(1614);
	v->a[74857] = 6;
	v->a[74858] = sym_arithmetic_expansion;
	v->a[74859] = sym_string;
	small_parse_table_3743(v);
}

void	small_parse_table_3743(t_small_parse_table_array *v)
{
	v->a[74860] = sym_number;
	v->a[74861] = sym_simple_expansion;
	v->a[74862] = sym_expansion;
	v->a[74863] = sym_command_substitution;
	v->a[74864] = 3;
	v->a[74865] = actions(1404);
	v->a[74866] = 1;
	v->a[74867] = sym_comment;
	v->a[74868] = actions(1257);
	v->a[74869] = 7;
	v->a[74870] = anon_sym_PIPE;
	v->a[74871] = anon_sym_LT;
	v->a[74872] = anon_sym_GT;
	v->a[74873] = anon_sym_AMP_GT;
	v->a[74874] = anon_sym_LT_AMP;
	v->a[74875] = anon_sym_GT_AMP;
	v->a[74876] = anon_sym_LT_LT;
	v->a[74877] = actions(1255);
	v->a[74878] = 12;
	v->a[74879] = sym_file_descriptor;
	small_parse_table_3744(v);
}

void	small_parse_table_3744(t_small_parse_table_array *v)
{
	v->a[74880] = sym__concat;
	v->a[74881] = sym_variable_name;
	v->a[74882] = anon_sym_AMP_AMP;
	v->a[74883] = anon_sym_PIPE_PIPE;
	v->a[74884] = anon_sym_GT_GT;
	v->a[74885] = anon_sym_AMP_GT_GT;
	v->a[74886] = anon_sym_GT_PIPE;
	v->a[74887] = anon_sym_LT_AMP_DASH;
	v->a[74888] = anon_sym_GT_AMP_DASH;
	v->a[74889] = anon_sym_LT_LT_DASH;
	v->a[74890] = aux_sym_concatenation_token1;
	v->a[74891] = 14;
	v->a[74892] = actions(3);
	v->a[74893] = 1;
	v->a[74894] = sym_comment;
	v->a[74895] = actions(2929);
	v->a[74896] = 1;
	v->a[74897] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74898] = actions(2931);
	v->a[74899] = 1;
	small_parse_table_3745(v);
}

/* EOF small_parse_table_748.c */

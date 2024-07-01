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
	v->a[74800] = 1;
	v->a[74801] = anon_sym_BQUOTE;
	v->a[74802] = actions(2735);
	v->a[74803] = 1;
	v->a[74804] = anon_sym_DOLLAR;
	v->a[74805] = actions(2737);
	v->a[74806] = 1;
	v->a[74807] = sym__bare_dollar;
	v->a[74808] = actions(2733);
	v->a[74809] = 5;
	v->a[74810] = aux_sym_concatenation_token1;
	v->a[74811] = sym_raw_string;
	v->a[74812] = sym_number;
	v->a[74813] = sym__comment_word;
	v->a[74814] = sym_word;
	v->a[74815] = state(1214);
	v->a[74816] = 5;
	v->a[74817] = sym_arithmetic_expansion;
	v->a[74818] = sym_string;
	v->a[74819] = sym_simple_expansion;
	small_parse_table_3741(v);
}

void	small_parse_table_3741(t_small_parse_table_array *v)
{
	v->a[74820] = sym_expansion;
	v->a[74821] = sym_command_substitution;
	v->a[74822] = 12;
	v->a[74823] = actions(3);
	v->a[74824] = 1;
	v->a[74825] = sym_comment;
	v->a[74826] = actions(2587);
	v->a[74827] = 1;
	v->a[74828] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74829] = actions(2591);
	v->a[74830] = 1;
	v->a[74831] = anon_sym_DQUOTE;
	v->a[74832] = actions(2593);
	v->a[74833] = 1;
	v->a[74834] = anon_sym_DOLLAR_LBRACE;
	v->a[74835] = actions(2595);
	v->a[74836] = 1;
	v->a[74837] = anon_sym_DOLLAR_LPAREN;
	v->a[74838] = actions(2597);
	v->a[74839] = 1;
	small_parse_table_3742(v);
}

void	small_parse_table_3742(t_small_parse_table_array *v)
{
	v->a[74840] = anon_sym_BQUOTE;
	v->a[74841] = actions(2741);
	v->a[74842] = 1;
	v->a[74843] = anon_sym_DOLLAR;
	v->a[74844] = actions(2743);
	v->a[74845] = 1;
	v->a[74846] = sym__comment_word;
	v->a[74847] = actions(2745);
	v->a[74848] = 1;
	v->a[74849] = sym__empty_value;
	v->a[74850] = state(720);
	v->a[74851] = 1;
	v->a[74852] = sym_concatenation;
	v->a[74853] = actions(2739);
	v->a[74854] = 3;
	v->a[74855] = sym_raw_string;
	v->a[74856] = sym_number;
	v->a[74857] = sym_word;
	v->a[74858] = state(780);
	v->a[74859] = 5;
	small_parse_table_3743(v);
}

void	small_parse_table_3743(t_small_parse_table_array *v)
{
	v->a[74860] = sym_arithmetic_expansion;
	v->a[74861] = sym_string;
	v->a[74862] = sym_simple_expansion;
	v->a[74863] = sym_expansion;
	v->a[74864] = sym_command_substitution;
	v->a[74865] = 3;
	v->a[74866] = actions(870);
	v->a[74867] = 1;
	v->a[74868] = sym_comment;
	v->a[74869] = actions(1031);
	v->a[74870] = 6;
	v->a[74871] = anon_sym_PIPE;
	v->a[74872] = anon_sym_LT;
	v->a[74873] = anon_sym_GT;
	v->a[74874] = anon_sym_LT_AMP;
	v->a[74875] = anon_sym_GT_AMP;
	v->a[74876] = anon_sym_LT_LT;
	v->a[74877] = actions(1033);
	v->a[74878] = 11;
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
	v->a[74885] = anon_sym_GT_PIPE;
	v->a[74886] = anon_sym_LT_AMP_DASH;
	v->a[74887] = anon_sym_GT_AMP_DASH;
	v->a[74888] = anon_sym_LT_LT_DASH;
	v->a[74889] = aux_sym_concatenation_token1;
	v->a[74890] = 7;
	v->a[74891] = actions(3);
	v->a[74892] = 1;
	v->a[74893] = sym_comment;
	v->a[74894] = actions(2255);
	v->a[74895] = 1;
	v->a[74896] = aux_sym_heredoc_redirect_token1;
	v->a[74897] = actions(2753);
	v->a[74898] = 1;
	v->a[74899] = sym_file_descriptor;
	small_parse_table_3745(v);
}

/* EOF small_parse_table_748.c */

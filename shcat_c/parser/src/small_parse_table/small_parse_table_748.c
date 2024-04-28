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
	v->a[74800] = anon_sym_LT_LT_LT;
	v->a[74801] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74802] = anon_sym_DOLLAR_LBRACK;
	v->a[74803] = anon_sym_DOLLAR;
	v->a[74804] = sym__special_character;
	v->a[74805] = anon_sym_DQUOTE;
	v->a[74806] = sym_raw_string;
	v->a[74807] = sym_ansi_c_string;
	v->a[74808] = aux_sym_number_token1;
	v->a[74809] = aux_sym_number_token2;
	v->a[74810] = anon_sym_DOLLAR_LBRACE;
	v->a[74811] = anon_sym_DOLLAR_LPAREN;
	v->a[74812] = anon_sym_BQUOTE;
	v->a[74813] = anon_sym_DOLLAR_BQUOTE;
	v->a[74814] = anon_sym_LT_LPAREN;
	v->a[74815] = anon_sym_GT_LPAREN;
	v->a[74816] = sym_word;
	v->a[74817] = 6;
	v->a[74818] = actions(3);
	v->a[74819] = 1;
	small_parse_table_3741(v);
}

void	small_parse_table_3741(t_small_parse_table_array *v)
{
	v->a[74820] = sym_comment;
	v->a[74821] = actions(5664);
	v->a[74822] = 1;
	v->a[74823] = aux_sym_concatenation_token1;
	v->a[74824] = actions(5666);
	v->a[74825] = 1;
	v->a[74826] = sym__concat;
	v->a[74827] = state(1664);
	v->a[74828] = 1;
	v->a[74829] = aux_sym_concatenation_repeat1;
	v->a[74830] = actions(5176);
	v->a[74831] = 5;
	v->a[74832] = sym_file_descriptor;
	v->a[74833] = sym_variable_name;
	v->a[74834] = sym_test_operator;
	v->a[74835] = sym__brace_start;
	v->a[74836] = aux_sym_heredoc_redirect_token1;
	v->a[74837] = actions(5174);
	v->a[74838] = 37;
	v->a[74839] = anon_sym_LPAREN_LPAREN;
	small_parse_table_3742(v);
}

void	small_parse_table_3742(t_small_parse_table_array *v)
{
	v->a[74840] = anon_sym_SEMI;
	v->a[74841] = anon_sym_PIPE_PIPE;
	v->a[74842] = anon_sym_AMP_AMP;
	v->a[74843] = anon_sym_PIPE;
	v->a[74844] = anon_sym_AMP;
	v->a[74845] = anon_sym_LT;
	v->a[74846] = anon_sym_GT;
	v->a[74847] = anon_sym_LT_LT;
	v->a[74848] = anon_sym_GT_GT;
	v->a[74849] = anon_sym_SEMI_SEMI;
	v->a[74850] = anon_sym_PIPE_AMP;
	v->a[74851] = anon_sym_AMP_GT;
	v->a[74852] = anon_sym_AMP_GT_GT;
	v->a[74853] = anon_sym_LT_AMP;
	v->a[74854] = anon_sym_GT_AMP;
	v->a[74855] = anon_sym_GT_PIPE;
	v->a[74856] = anon_sym_LT_AMP_DASH;
	v->a[74857] = anon_sym_GT_AMP_DASH;
	v->a[74858] = anon_sym_LT_LT_DASH;
	v->a[74859] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3743(v);
}

void	small_parse_table_3743(t_small_parse_table_array *v)
{
	v->a[74860] = anon_sym_DOLLAR_LBRACK;
	v->a[74861] = anon_sym_DOLLAR;
	v->a[74862] = sym__special_character;
	v->a[74863] = anon_sym_DQUOTE;
	v->a[74864] = sym_raw_string;
	v->a[74865] = sym_ansi_c_string;
	v->a[74866] = aux_sym_number_token1;
	v->a[74867] = aux_sym_number_token2;
	v->a[74868] = anon_sym_DOLLAR_LBRACE;
	v->a[74869] = anon_sym_DOLLAR_LPAREN;
	v->a[74870] = anon_sym_BQUOTE;
	v->a[74871] = anon_sym_DOLLAR_BQUOTE;
	v->a[74872] = anon_sym_LT_LPAREN;
	v->a[74873] = anon_sym_GT_LPAREN;
	v->a[74874] = aux_sym__simple_variable_name_token1;
	v->a[74875] = sym_word;
	v->a[74876] = 9;
	v->a[74877] = actions(71);
	v->a[74878] = 1;
	v->a[74879] = sym_comment;
	small_parse_table_3744(v);
}

void	small_parse_table_3744(t_small_parse_table_array *v)
{
	v->a[74880] = actions(5791);
	v->a[74881] = 1;
	v->a[74882] = anon_sym_DQUOTE;
	v->a[74883] = actions(5793);
	v->a[74884] = 1;
	v->a[74885] = anon_sym_DOLLAR_LBRACE;
	v->a[74886] = actions(5795);
	v->a[74887] = 1;
	v->a[74888] = anon_sym_DOLLAR_LPAREN;
	v->a[74889] = actions(5797);
	v->a[74890] = 1;
	v->a[74891] = anon_sym_BQUOTE;
	v->a[74892] = actions(5799);
	v->a[74893] = 1;
	v->a[74894] = anon_sym_DOLLAR_BQUOTE;
	v->a[74895] = state(2865);
	v->a[74896] = 3;
	v->a[74897] = sym_string;
	v->a[74898] = sym_expansion;
	v->a[74899] = sym_command_substitution;
	small_parse_table_3745(v);
}

/* EOF small_parse_table_748.c */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1328.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6640(t_small_parse_table_array *v)
{
	v->a[132800] = aux_sym__simple_variable_name_token1;
	v->a[132801] = sym_word;
	v->a[132802] = actions(1310);
	v->a[132803] = 26;
	v->a[132804] = sym_file_descriptor;
	v->a[132805] = sym__concat;
	v->a[132806] = sym_variable_name;
	v->a[132807] = sym_test_operator;
	v->a[132808] = sym__brace_start;
	v->a[132809] = anon_sym_LPAREN_LPAREN;
	v->a[132810] = anon_sym_PIPE_PIPE;
	v->a[132811] = anon_sym_AMP_AMP;
	v->a[132812] = anon_sym_GT_GT;
	v->a[132813] = anon_sym_PIPE_AMP;
	v->a[132814] = anon_sym_AMP_GT_GT;
	v->a[132815] = anon_sym_GT_PIPE;
	v->a[132816] = anon_sym_LT_AMP_DASH;
	v->a[132817] = anon_sym_GT_AMP_DASH;
	v->a[132818] = anon_sym_LT_LT_DASH;
	v->a[132819] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_6641(v);
}

void	small_parse_table_6641(t_small_parse_table_array *v)
{
	v->a[132820] = anon_sym_DOLLAR_LBRACK;
	v->a[132821] = aux_sym_concatenation_token1;
	v->a[132822] = sym__special_character;
	v->a[132823] = anon_sym_DQUOTE;
	v->a[132824] = sym_raw_string;
	v->a[132825] = sym_ansi_c_string;
	v->a[132826] = anon_sym_DOLLAR_LBRACE;
	v->a[132827] = anon_sym_DOLLAR_BQUOTE;
	v->a[132828] = anon_sym_LT_LPAREN;
	v->a[132829] = anon_sym_GT_LPAREN;
	v->a[132830] = 3;
	v->a[132831] = actions(71);
	v->a[132832] = 1;
	v->a[132833] = sym_comment;
	v->a[132834] = actions(1308);
	v->a[132835] = 14;
	v->a[132836] = anon_sym_EQ;
	v->a[132837] = anon_sym_PIPE;
	v->a[132838] = anon_sym_CARET;
	v->a[132839] = anon_sym_AMP;
	small_parse_table_6642(v);
}

void	small_parse_table_6642(t_small_parse_table_array *v)
{
	v->a[132840] = anon_sym_LT;
	v->a[132841] = anon_sym_GT;
	v->a[132842] = anon_sym_LT_LT;
	v->a[132843] = anon_sym_GT_GT;
	v->a[132844] = anon_sym_PLUS;
	v->a[132845] = anon_sym_DASH;
	v->a[132846] = anon_sym_STAR;
	v->a[132847] = anon_sym_SLASH;
	v->a[132848] = anon_sym_PERCENT;
	v->a[132849] = anon_sym_STAR_STAR;
	v->a[132850] = actions(1310);
	v->a[132851] = 26;
	v->a[132852] = sym_test_operator;
	v->a[132853] = sym_extglob_pattern;
	v->a[132854] = anon_sym_RPAREN_RPAREN;
	v->a[132855] = anon_sym_PLUS_PLUS;
	v->a[132856] = anon_sym_DASH_DASH;
	v->a[132857] = anon_sym_PLUS_EQ;
	v->a[132858] = anon_sym_DASH_EQ;
	v->a[132859] = anon_sym_STAR_EQ;
	small_parse_table_6643(v);
}

void	small_parse_table_6643(t_small_parse_table_array *v)
{
	v->a[132860] = anon_sym_SLASH_EQ;
	v->a[132861] = anon_sym_PERCENT_EQ;
	v->a[132862] = anon_sym_STAR_STAR_EQ;
	v->a[132863] = anon_sym_LT_LT_EQ;
	v->a[132864] = anon_sym_GT_GT_EQ;
	v->a[132865] = anon_sym_AMP_EQ;
	v->a[132866] = anon_sym_CARET_EQ;
	v->a[132867] = anon_sym_PIPE_EQ;
	v->a[132868] = anon_sym_PIPE_PIPE;
	v->a[132869] = anon_sym_AMP_AMP;
	v->a[132870] = anon_sym_EQ_EQ;
	v->a[132871] = anon_sym_BANG_EQ;
	v->a[132872] = anon_sym_LT_EQ;
	v->a[132873] = anon_sym_GT_EQ;
	v->a[132874] = anon_sym_RBRACK_RBRACK;
	v->a[132875] = anon_sym_EQ_TILDE;
	v->a[132876] = anon_sym_QMARK;
	v->a[132877] = anon_sym_COLON;
	v->a[132878] = 3;
	v->a[132879] = actions(71);
	small_parse_table_6644(v);
}

void	small_parse_table_6644(t_small_parse_table_array *v)
{
	v->a[132880] = 1;
	v->a[132881] = sym_comment;
	v->a[132882] = actions(1304);
	v->a[132883] = 14;
	v->a[132884] = anon_sym_EQ;
	v->a[132885] = anon_sym_PIPE;
	v->a[132886] = anon_sym_CARET;
	v->a[132887] = anon_sym_AMP;
	v->a[132888] = anon_sym_LT;
	v->a[132889] = anon_sym_GT;
	v->a[132890] = anon_sym_LT_LT;
	v->a[132891] = anon_sym_GT_GT;
	v->a[132892] = anon_sym_PLUS;
	v->a[132893] = anon_sym_DASH;
	v->a[132894] = anon_sym_STAR;
	v->a[132895] = anon_sym_SLASH;
	v->a[132896] = anon_sym_PERCENT;
	v->a[132897] = anon_sym_STAR_STAR;
	v->a[132898] = actions(1306);
	v->a[132899] = 26;
	small_parse_table_6645(v);
}

/* EOF small_parse_table_1328.c */

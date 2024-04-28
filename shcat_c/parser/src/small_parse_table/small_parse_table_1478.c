/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1478.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7390(t_small_parse_table_array *v)
{
	v->a[147800] = anon_sym_LT;
	v->a[147801] = anon_sym_GT;
	v->a[147802] = actions(6903);
	v->a[147803] = 2;
	v->a[147804] = anon_sym_LT_EQ;
	v->a[147805] = anon_sym_GT_EQ;
	v->a[147806] = actions(6905);
	v->a[147807] = 2;
	v->a[147808] = anon_sym_LT_LT;
	v->a[147809] = anon_sym_GT_GT;
	v->a[147810] = actions(6907);
	v->a[147811] = 2;
	v->a[147812] = anon_sym_PLUS;
	v->a[147813] = anon_sym_DASH;
	v->a[147814] = actions(6909);
	v->a[147815] = 3;
	v->a[147816] = anon_sym_STAR;
	v->a[147817] = anon_sym_SLASH;
	v->a[147818] = anon_sym_PERCENT;
	v->a[147819] = actions(6887);
	small_parse_table_7391(v);
}

void	small_parse_table_7391(t_small_parse_table_array *v)
{
	v->a[147820] = 11;
	v->a[147821] = anon_sym_PLUS_EQ;
	v->a[147822] = anon_sym_DASH_EQ;
	v->a[147823] = anon_sym_STAR_EQ;
	v->a[147824] = anon_sym_SLASH_EQ;
	v->a[147825] = anon_sym_PERCENT_EQ;
	v->a[147826] = anon_sym_STAR_STAR_EQ;
	v->a[147827] = anon_sym_LT_LT_EQ;
	v->a[147828] = anon_sym_GT_GT_EQ;
	v->a[147829] = anon_sym_AMP_EQ;
	v->a[147830] = anon_sym_CARET_EQ;
	v->a[147831] = anon_sym_PIPE_EQ;
	v->a[147832] = 3;
	v->a[147833] = actions(71);
	v->a[147834] = 1;
	v->a[147835] = sym_comment;
	v->a[147836] = actions(1261);
	v->a[147837] = 12;
	v->a[147838] = anon_sym_PIPE;
	v->a[147839] = anon_sym_LT;
	small_parse_table_7392(v);
}

void	small_parse_table_7392(t_small_parse_table_array *v)
{
	v->a[147840] = anon_sym_GT;
	v->a[147841] = anon_sym_LT_LT;
	v->a[147842] = anon_sym_AMP_GT;
	v->a[147843] = anon_sym_LT_AMP;
	v->a[147844] = anon_sym_GT_AMP;
	v->a[147845] = anon_sym_DOLLAR;
	v->a[147846] = aux_sym_number_token1;
	v->a[147847] = aux_sym_number_token2;
	v->a[147848] = anon_sym_DOLLAR_LPAREN;
	v->a[147849] = sym_word;
	v->a[147850] = actions(1263);
	v->a[147851] = 26;
	v->a[147852] = sym_file_descriptor;
	v->a[147853] = sym_variable_name;
	v->a[147854] = sym_test_operator;
	v->a[147855] = sym__brace_start;
	v->a[147856] = anon_sym_LPAREN_LPAREN;
	v->a[147857] = anon_sym_PIPE_PIPE;
	v->a[147858] = anon_sym_AMP_AMP;
	v->a[147859] = anon_sym_GT_GT;
	small_parse_table_7393(v);
}

void	small_parse_table_7393(t_small_parse_table_array *v)
{
	v->a[147860] = anon_sym_PIPE_AMP;
	v->a[147861] = anon_sym_AMP_GT_GT;
	v->a[147862] = anon_sym_GT_PIPE;
	v->a[147863] = anon_sym_LT_AMP_DASH;
	v->a[147864] = anon_sym_GT_AMP_DASH;
	v->a[147865] = anon_sym_LT_LT_DASH;
	v->a[147866] = anon_sym_LT_LT_LT;
	v->a[147867] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[147868] = anon_sym_DOLLAR_LBRACK;
	v->a[147869] = sym__special_character;
	v->a[147870] = anon_sym_DQUOTE;
	v->a[147871] = sym_raw_string;
	v->a[147872] = sym_ansi_c_string;
	v->a[147873] = anon_sym_DOLLAR_LBRACE;
	v->a[147874] = anon_sym_BQUOTE;
	v->a[147875] = anon_sym_DOLLAR_BQUOTE;
	v->a[147876] = anon_sym_LT_LPAREN;
	v->a[147877] = anon_sym_GT_LPAREN;
	v->a[147878] = 21;
	v->a[147879] = actions(71);
	small_parse_table_7394(v);
}

void	small_parse_table_7394(t_small_parse_table_array *v)
{
	v->a[147880] = 1;
	v->a[147881] = sym_comment;
	v->a[147882] = actions(6881);
	v->a[147883] = 1;
	v->a[147884] = anon_sym_COMMA;
	v->a[147885] = actions(6883);
	v->a[147886] = 1;
	v->a[147887] = anon_sym_EQ;
	v->a[147888] = actions(6889);
	v->a[147889] = 1;
	v->a[147890] = anon_sym_PIPE_PIPE;
	v->a[147891] = actions(6891);
	v->a[147892] = 1;
	v->a[147893] = anon_sym_AMP_AMP;
	v->a[147894] = actions(6893);
	v->a[147895] = 1;
	v->a[147896] = anon_sym_PIPE;
	v->a[147897] = actions(6895);
	v->a[147898] = 1;
	v->a[147899] = anon_sym_CARET;
	small_parse_table_7395(v);
}

/* EOF small_parse_table_1478.c */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1178.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5890(t_small_parse_table_array *v)
{
	v->a[117800] = sym__special_character;
	v->a[117801] = actions(1081);
	v->a[117802] = 1;
	v->a[117803] = anon_sym_DQUOTE;
	v->a[117804] = actions(1085);
	v->a[117805] = 1;
	v->a[117806] = anon_sym_DOLLAR_LBRACE;
	v->a[117807] = actions(1087);
	v->a[117808] = 1;
	v->a[117809] = anon_sym_DOLLAR_BQUOTE;
	v->a[117810] = actions(3598);
	v->a[117811] = 1;
	v->a[117812] = anon_sym_BQUOTE;
	v->a[117813] = state(2690);
	v->a[117814] = 1;
	v->a[117815] = aux_sym__literal_repeat1;
	v->a[117816] = state(3095);
	v->a[117817] = 1;
	v->a[117818] = sym__expression;
	v->a[117819] = actions(103);
	small_parse_table_5891(v);
}

void	small_parse_table_5891(t_small_parse_table_array *v)
{
	v->a[117820] = 2;
	v->a[117821] = anon_sym_PLUS_PLUS2;
	v->a[117822] = anon_sym_DASH_DASH2;
	v->a[117823] = actions(105);
	v->a[117824] = 2;
	v->a[117825] = anon_sym_DASH2;
	v->a[117826] = anon_sym_PLUS2;
	v->a[117827] = actions(1073);
	v->a[117828] = 2;
	v->a[117829] = anon_sym_LPAREN_LPAREN;
	v->a[117830] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[117831] = actions(1083);
	v->a[117832] = 2;
	v->a[117833] = sym_raw_string;
	v->a[117834] = sym_ansi_c_string;
	v->a[117835] = actions(1089);
	v->a[117836] = 2;
	v->a[117837] = anon_sym_LT_LPAREN;
	v->a[117838] = anon_sym_GT_LPAREN;
	v->a[117839] = state(3053);
	small_parse_table_5892(v);
}

void	small_parse_table_5892(t_small_parse_table_array *v)
{
	v->a[117840] = 6;
	v->a[117841] = sym_binary_expression;
	v->a[117842] = sym_ternary_expression;
	v->a[117843] = sym_unary_expression;
	v->a[117844] = sym_postfix_expression;
	v->a[117845] = sym_parenthesized_expression;
	v->a[117846] = sym_concatenation;
	v->a[117847] = state(2500);
	v->a[117848] = 9;
	v->a[117849] = sym_arithmetic_expansion;
	v->a[117850] = sym_brace_expression;
	v->a[117851] = sym_string;
	v->a[117852] = sym_translated_string;
	v->a[117853] = sym_number;
	v->a[117854] = sym_simple_expansion;
	v->a[117855] = sym_expansion;
	v->a[117856] = sym_command_substitution;
	v->a[117857] = sym_process_substitution;
	v->a[117858] = 3;
	v->a[117859] = actions(3);
	small_parse_table_5893(v);
}

void	small_parse_table_5893(t_small_parse_table_array *v)
{
	v->a[117860] = 1;
	v->a[117861] = sym_comment;
	v->a[117862] = actions(1330);
	v->a[117863] = 6;
	v->a[117864] = sym_file_descriptor;
	v->a[117865] = sym__concat;
	v->a[117866] = sym_test_operator;
	v->a[117867] = sym__brace_start;
	v->a[117868] = ts_builtin_sym_end;
	v->a[117869] = aux_sym_heredoc_redirect_token1;
	v->a[117870] = actions(1328);
	v->a[117871] = 37;
	v->a[117872] = anon_sym_LPAREN_LPAREN;
	v->a[117873] = anon_sym_SEMI;
	v->a[117874] = anon_sym_PIPE_PIPE;
	v->a[117875] = anon_sym_AMP_AMP;
	v->a[117876] = anon_sym_PIPE;
	v->a[117877] = anon_sym_AMP;
	v->a[117878] = anon_sym_LT;
	v->a[117879] = anon_sym_GT;
	small_parse_table_5894(v);
}

void	small_parse_table_5894(t_small_parse_table_array *v)
{
	v->a[117880] = anon_sym_LT_LT;
	v->a[117881] = anon_sym_GT_GT;
	v->a[117882] = anon_sym_SEMI_SEMI;
	v->a[117883] = anon_sym_PIPE_AMP;
	v->a[117884] = anon_sym_AMP_GT;
	v->a[117885] = anon_sym_AMP_GT_GT;
	v->a[117886] = anon_sym_LT_AMP;
	v->a[117887] = anon_sym_GT_AMP;
	v->a[117888] = anon_sym_GT_PIPE;
	v->a[117889] = anon_sym_LT_AMP_DASH;
	v->a[117890] = anon_sym_GT_AMP_DASH;
	v->a[117891] = anon_sym_LT_LT_DASH;
	v->a[117892] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[117893] = anon_sym_DOLLAR_LBRACK;
	v->a[117894] = aux_sym_concatenation_token1;
	v->a[117895] = anon_sym_DOLLAR;
	v->a[117896] = sym__special_character;
	v->a[117897] = anon_sym_DQUOTE;
	v->a[117898] = sym_raw_string;
	v->a[117899] = sym_ansi_c_string;
	small_parse_table_5895(v);
}

/* EOF small_parse_table_1178.c */

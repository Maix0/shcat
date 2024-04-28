/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_888.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4440(t_small_parse_table_array *v)
{
	v->a[88800] = sym__expression;
	v->a[88801] = state(7121);
	v->a[88802] = 1;
	v->a[88803] = sym__test_command_binary_expression;
	v->a[88804] = actions(1129);
	v->a[88805] = 2;
	v->a[88806] = anon_sym_LPAREN_LPAREN;
	v->a[88807] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88808] = actions(1165);
	v->a[88809] = 2;
	v->a[88810] = anon_sym_LT_LPAREN;
	v->a[88811] = anon_sym_GT_LPAREN;
	v->a[88812] = actions(1191);
	v->a[88813] = 2;
	v->a[88814] = anon_sym_PLUS_PLUS2;
	v->a[88815] = anon_sym_DASH_DASH2;
	v->a[88816] = actions(1193);
	v->a[88817] = 2;
	v->a[88818] = anon_sym_DASH2;
	v->a[88819] = anon_sym_PLUS2;
	small_parse_table_4441(v);
}

void	small_parse_table_4441(t_small_parse_table_array *v)
{
	v->a[88820] = actions(1199);
	v->a[88821] = 2;
	v->a[88822] = sym_raw_string;
	v->a[88823] = sym_ansi_c_string;
	v->a[88824] = state(2594);
	v->a[88825] = 6;
	v->a[88826] = sym_binary_expression;
	v->a[88827] = sym_ternary_expression;
	v->a[88828] = sym_unary_expression;
	v->a[88829] = sym_postfix_expression;
	v->a[88830] = sym_parenthesized_expression;
	v->a[88831] = sym_concatenation;
	v->a[88832] = state(2503);
	v->a[88833] = 9;
	v->a[88834] = sym_arithmetic_expansion;
	v->a[88835] = sym_brace_expression;
	v->a[88836] = sym_string;
	v->a[88837] = sym_translated_string;
	v->a[88838] = sym_number;
	v->a[88839] = sym_simple_expansion;
	small_parse_table_4442(v);
}

void	small_parse_table_4442(t_small_parse_table_array *v)
{
	v->a[88840] = sym_expansion;
	v->a[88841] = sym_command_substitution;
	v->a[88842] = sym_process_substitution;
	v->a[88843] = 6;
	v->a[88844] = actions(3);
	v->a[88845] = 1;
	v->a[88846] = sym_comment;
	v->a[88847] = actions(6013);
	v->a[88848] = 1;
	v->a[88849] = aux_sym_concatenation_token1;
	v->a[88850] = actions(6015);
	v->a[88851] = 1;
	v->a[88852] = sym__concat;
	v->a[88853] = state(1894);
	v->a[88854] = 1;
	v->a[88855] = aux_sym_concatenation_repeat1;
	v->a[88856] = actions(5395);
	v->a[88857] = 4;
	v->a[88858] = sym_file_descriptor;
	v->a[88859] = sym_test_operator;
	small_parse_table_4443(v);
}

void	small_parse_table_4443(t_small_parse_table_array *v)
{
	v->a[88860] = sym__brace_start;
	v->a[88861] = aux_sym_heredoc_redirect_token1;
	v->a[88862] = actions(5393);
	v->a[88863] = 37;
	v->a[88864] = anon_sym_LPAREN_LPAREN;
	v->a[88865] = anon_sym_SEMI;
	v->a[88866] = anon_sym_PIPE_PIPE;
	v->a[88867] = anon_sym_AMP_AMP;
	v->a[88868] = anon_sym_PIPE;
	v->a[88869] = anon_sym_AMP;
	v->a[88870] = anon_sym_LT;
	v->a[88871] = anon_sym_GT;
	v->a[88872] = anon_sym_LT_LT;
	v->a[88873] = anon_sym_GT_GT;
	v->a[88874] = anon_sym_RPAREN;
	v->a[88875] = anon_sym_SEMI_SEMI;
	v->a[88876] = anon_sym_PIPE_AMP;
	v->a[88877] = anon_sym_AMP_GT;
	v->a[88878] = anon_sym_AMP_GT_GT;
	v->a[88879] = anon_sym_LT_AMP;
	small_parse_table_4444(v);
}

void	small_parse_table_4444(t_small_parse_table_array *v)
{
	v->a[88880] = anon_sym_GT_AMP;
	v->a[88881] = anon_sym_GT_PIPE;
	v->a[88882] = anon_sym_LT_AMP_DASH;
	v->a[88883] = anon_sym_GT_AMP_DASH;
	v->a[88884] = anon_sym_LT_LT_DASH;
	v->a[88885] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88886] = anon_sym_DOLLAR_LBRACK;
	v->a[88887] = anon_sym_DOLLAR;
	v->a[88888] = sym__special_character;
	v->a[88889] = anon_sym_DQUOTE;
	v->a[88890] = sym_raw_string;
	v->a[88891] = sym_ansi_c_string;
	v->a[88892] = aux_sym_number_token1;
	v->a[88893] = aux_sym_number_token2;
	v->a[88894] = anon_sym_DOLLAR_LBRACE;
	v->a[88895] = anon_sym_DOLLAR_LPAREN;
	v->a[88896] = anon_sym_BQUOTE;
	v->a[88897] = anon_sym_DOLLAR_BQUOTE;
	v->a[88898] = anon_sym_LT_LPAREN;
	v->a[88899] = anon_sym_GT_LPAREN;
	small_parse_table_4445(v);
}

/* EOF small_parse_table_888.c */

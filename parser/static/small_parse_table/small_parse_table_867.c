/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_867.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4335(t_small_parse_table_array *v)
{
	v->a[86700] = 1;
	v->a[86701] = anon_sym_BQUOTE;
	v->a[86702] = state(2484);
	v->a[86703] = 1;
	v->a[86704] = aux_sym__literal_repeat1;
	v->a[86705] = state(3154);
	v->a[86706] = 1;
	v->a[86707] = sym__expression;
	v->a[86708] = actions(1129);
	v->a[86709] = 2;
	v->a[86710] = anon_sym_LPAREN_LPAREN;
	v->a[86711] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86712] = actions(1165);
	v->a[86713] = 2;
	v->a[86714] = anon_sym_LT_LPAREN;
	v->a[86715] = anon_sym_GT_LPAREN;
	v->a[86716] = actions(1175);
	v->a[86717] = 2;
	v->a[86718] = anon_sym_PLUS_PLUS2;
	v->a[86719] = anon_sym_DASH_DASH2;
	small_parse_table_4336(v);
}

void	small_parse_table_4336(t_small_parse_table_array *v)
{
	v->a[86720] = actions(1177);
	v->a[86721] = 2;
	v->a[86722] = anon_sym_DASH2;
	v->a[86723] = anon_sym_PLUS2;
	v->a[86724] = actions(1183);
	v->a[86725] = 2;
	v->a[86726] = sym_raw_string;
	v->a[86727] = sym_ansi_c_string;
	v->a[86728] = state(2594);
	v->a[86729] = 6;
	v->a[86730] = sym_binary_expression;
	v->a[86731] = sym_ternary_expression;
	v->a[86732] = sym_unary_expression;
	v->a[86733] = sym_postfix_expression;
	v->a[86734] = sym_parenthesized_expression;
	v->a[86735] = sym_concatenation;
	v->a[86736] = state(2456);
	v->a[86737] = 9;
	v->a[86738] = sym_arithmetic_expansion;
	v->a[86739] = sym_brace_expression;
	small_parse_table_4337(v);
}

void	small_parse_table_4337(t_small_parse_table_array *v)
{
	v->a[86740] = sym_string;
	v->a[86741] = sym_translated_string;
	v->a[86742] = sym_number;
	v->a[86743] = sym_simple_expansion;
	v->a[86744] = sym_expansion;
	v->a[86745] = sym_command_substitution;
	v->a[86746] = sym_process_substitution;
	v->a[86747] = 3;
	v->a[86748] = actions(3);
	v->a[86749] = 1;
	v->a[86750] = sym_comment;
	v->a[86751] = actions(1334);
	v->a[86752] = 5;
	v->a[86753] = sym_file_descriptor;
	v->a[86754] = sym__concat;
	v->a[86755] = sym_test_operator;
	v->a[86756] = sym__brace_start;
	v->a[86757] = aux_sym_heredoc_redirect_token1;
	v->a[86758] = actions(1332);
	v->a[86759] = 39;
	small_parse_table_4338(v);
}

void	small_parse_table_4338(t_small_parse_table_array *v)
{
	v->a[86760] = anon_sym_LPAREN_LPAREN;
	v->a[86761] = anon_sym_SEMI;
	v->a[86762] = anon_sym_PIPE_PIPE;
	v->a[86763] = anon_sym_AMP_AMP;
	v->a[86764] = anon_sym_PIPE;
	v->a[86765] = anon_sym_AMP;
	v->a[86766] = anon_sym_LT;
	v->a[86767] = anon_sym_GT;
	v->a[86768] = anon_sym_LT_LT;
	v->a[86769] = anon_sym_GT_GT;
	v->a[86770] = anon_sym_SEMI_SEMI;
	v->a[86771] = anon_sym_SEMI_AMP;
	v->a[86772] = anon_sym_SEMI_SEMI_AMP;
	v->a[86773] = anon_sym_PIPE_AMP;
	v->a[86774] = anon_sym_AMP_GT;
	v->a[86775] = anon_sym_AMP_GT_GT;
	v->a[86776] = anon_sym_LT_AMP;
	v->a[86777] = anon_sym_GT_AMP;
	v->a[86778] = anon_sym_GT_PIPE;
	v->a[86779] = anon_sym_LT_AMP_DASH;
	small_parse_table_4339(v);
}

void	small_parse_table_4339(t_small_parse_table_array *v)
{
	v->a[86780] = anon_sym_GT_AMP_DASH;
	v->a[86781] = anon_sym_LT_LT_DASH;
	v->a[86782] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86783] = anon_sym_DOLLAR_LBRACK;
	v->a[86784] = aux_sym_concatenation_token1;
	v->a[86785] = anon_sym_DOLLAR;
	v->a[86786] = sym__special_character;
	v->a[86787] = anon_sym_DQUOTE;
	v->a[86788] = sym_raw_string;
	v->a[86789] = sym_ansi_c_string;
	v->a[86790] = aux_sym_number_token1;
	v->a[86791] = aux_sym_number_token2;
	v->a[86792] = anon_sym_DOLLAR_LBRACE;
	v->a[86793] = anon_sym_DOLLAR_LPAREN;
	v->a[86794] = anon_sym_BQUOTE;
	v->a[86795] = anon_sym_DOLLAR_BQUOTE;
	v->a[86796] = anon_sym_LT_LPAREN;
	v->a[86797] = anon_sym_GT_LPAREN;
	v->a[86798] = sym_word;
	v->a[86799] = 6;
	small_parse_table_4340(v);
}

/* EOF small_parse_table_867.c */

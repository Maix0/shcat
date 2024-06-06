/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1117.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5585(t_small_parse_table_array *v)
{
	v->a[111700] = 9;
	v->a[111701] = anon_sym_PIPE;
	v->a[111702] = anon_sym_SEMI_SEMI;
	v->a[111703] = anon_sym_PIPE_AMP;
	v->a[111704] = anon_sym_AMP_AMP;
	v->a[111705] = anon_sym_PIPE_PIPE;
	v->a[111706] = anon_sym_LT_LT;
	v->a[111707] = anon_sym_LT_LT_DASH;
	v->a[111708] = anon_sym_AMP;
	v->a[111709] = anon_sym_SEMI;
	v->a[111710] = 3;
	v->a[111711] = actions(3);
	v->a[111712] = 1;
	v->a[111713] = sym_comment;
	v->a[111714] = actions(6219);
	v->a[111715] = 2;
	v->a[111716] = sym_file_descriptor;
	v->a[111717] = aux_sym_heredoc_redirect_token1;
	v->a[111718] = actions(6217);
	v->a[111719] = 21;
	small_parse_table_5586(v);
}

void	small_parse_table_5586(t_small_parse_table_array *v)
{
	v->a[111720] = anon_sym_PIPE;
	v->a[111721] = anon_sym_SEMI_SEMI;
	v->a[111722] = anon_sym_SEMI_AMP;
	v->a[111723] = anon_sym_SEMI_SEMI_AMP;
	v->a[111724] = anon_sym_PIPE_AMP;
	v->a[111725] = anon_sym_AMP_AMP;
	v->a[111726] = anon_sym_PIPE_PIPE;
	v->a[111727] = anon_sym_LT;
	v->a[111728] = anon_sym_GT;
	v->a[111729] = anon_sym_GT_GT;
	v->a[111730] = anon_sym_AMP_GT;
	v->a[111731] = anon_sym_AMP_GT_GT;
	v->a[111732] = anon_sym_LT_AMP;
	v->a[111733] = anon_sym_GT_AMP;
	v->a[111734] = anon_sym_GT_PIPE;
	v->a[111735] = anon_sym_LT_AMP_DASH;
	v->a[111736] = anon_sym_GT_AMP_DASH;
	v->a[111737] = anon_sym_LT_LT;
	v->a[111738] = anon_sym_LT_LT_DASH;
	v->a[111739] = anon_sym_AMP;
	small_parse_table_5587(v);
}

void	small_parse_table_5587(t_small_parse_table_array *v)
{
	v->a[111740] = anon_sym_SEMI;
	v->a[111741] = 17;
	v->a[111742] = actions(57);
	v->a[111743] = 1;
	v->a[111744] = sym_comment;
	v->a[111745] = actions(6388);
	v->a[111746] = 1;
	v->a[111747] = sym_word;
	v->a[111748] = actions(6390);
	v->a[111749] = 1;
	v->a[111750] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[111751] = actions(6392);
	v->a[111752] = 1;
	v->a[111753] = anon_sym_DOLLAR;
	v->a[111754] = actions(6394);
	v->a[111755] = 1;
	v->a[111756] = sym__special_character;
	v->a[111757] = actions(6396);
	v->a[111758] = 1;
	v->a[111759] = anon_sym_DQUOTE;
	small_parse_table_5588(v);
}

void	small_parse_table_5588(t_small_parse_table_array *v)
{
	v->a[111760] = actions(6400);
	v->a[111761] = 1;
	v->a[111762] = aux_sym_number_token1;
	v->a[111763] = actions(6402);
	v->a[111764] = 1;
	v->a[111765] = aux_sym_number_token2;
	v->a[111766] = actions(6404);
	v->a[111767] = 1;
	v->a[111768] = anon_sym_DOLLAR_LBRACE;
	v->a[111769] = actions(6406);
	v->a[111770] = 1;
	v->a[111771] = anon_sym_DOLLAR_LPAREN;
	v->a[111772] = actions(6408);
	v->a[111773] = 1;
	v->a[111774] = anon_sym_BQUOTE;
	v->a[111775] = actions(6410);
	v->a[111776] = 1;
	v->a[111777] = anon_sym_DOLLAR_BQUOTE;
	v->a[111778] = actions(6412);
	v->a[111779] = 1;
	small_parse_table_5589(v);
}

void	small_parse_table_5589(t_small_parse_table_array *v)
{
	v->a[111780] = sym__brace_start;
	v->a[111781] = state(3254);
	v->a[111782] = 1;
	v->a[111783] = aux_sym__literal_repeat1;
	v->a[111784] = state(3372);
	v->a[111785] = 1;
	v->a[111786] = sym_concatenation;
	v->a[111787] = actions(6398);
	v->a[111788] = 2;
	v->a[111789] = sym_test_operator;
	v->a[111790] = sym_raw_string;
	v->a[111791] = state(3226);
	v->a[111792] = 7;
	v->a[111793] = sym_arithmetic_expansion;
	v->a[111794] = sym_brace_expression;
	v->a[111795] = sym_string;
	v->a[111796] = sym_number;
	v->a[111797] = sym_simple_expansion;
	v->a[111798] = sym_expansion;
	v->a[111799] = sym_command_substitution;
	small_parse_table_5590(v);
}

/* EOF small_parse_table_1117.c */

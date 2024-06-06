/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1047.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5235(t_small_parse_table_array *v)
{
	v->a[104700] = anon_sym_BQUOTE;
	v->a[104701] = actions(5999);
	v->a[104702] = 1;
	v->a[104703] = anon_sym_DOLLAR_BQUOTE;
	v->a[104704] = actions(6001);
	v->a[104705] = 1;
	v->a[104706] = sym__special_character;
	v->a[104707] = state(1270);
	v->a[104708] = 1;
	v->a[104709] = aux_sym__literal_repeat1;
	v->a[104710] = actions(2388);
	v->a[104711] = 2;
	v->a[104712] = sym_test_operator;
	v->a[104713] = sym_raw_string;
	v->a[104714] = state(431);
	v->a[104715] = 2;
	v->a[104716] = sym_concatenation;
	v->a[104717] = aux_sym_for_statement_repeat1;
	v->a[104718] = state(1222);
	v->a[104719] = 7;
	small_parse_table_5236(v);
}

void	small_parse_table_5236(t_small_parse_table_array *v)
{
	v->a[104720] = sym_arithmetic_expansion;
	v->a[104721] = sym_brace_expression;
	v->a[104722] = sym_string;
	v->a[104723] = sym_number;
	v->a[104724] = sym_simple_expansion;
	v->a[104725] = sym_expansion;
	v->a[104726] = sym_command_substitution;
	v->a[104727] = 3;
	v->a[104728] = actions(3);
	v->a[104729] = 1;
	v->a[104730] = sym_comment;
	v->a[104731] = actions(6012);
	v->a[104732] = 3;
	v->a[104733] = sym_file_descriptor;
	v->a[104734] = ts_builtin_sym_end;
	v->a[104735] = aux_sym_heredoc_redirect_token1;
	v->a[104736] = actions(6014);
	v->a[104737] = 21;
	v->a[104738] = anon_sym_PIPE;
	v->a[104739] = anon_sym_RPAREN;
	small_parse_table_5237(v);
}

void	small_parse_table_5237(t_small_parse_table_array *v)
{
	v->a[104740] = anon_sym_SEMI_SEMI;
	v->a[104741] = anon_sym_PIPE_AMP;
	v->a[104742] = anon_sym_AMP_AMP;
	v->a[104743] = anon_sym_PIPE_PIPE;
	v->a[104744] = anon_sym_LT;
	v->a[104745] = anon_sym_GT;
	v->a[104746] = anon_sym_GT_GT;
	v->a[104747] = anon_sym_AMP_GT;
	v->a[104748] = anon_sym_AMP_GT_GT;
	v->a[104749] = anon_sym_LT_AMP;
	v->a[104750] = anon_sym_GT_AMP;
	v->a[104751] = anon_sym_GT_PIPE;
	v->a[104752] = anon_sym_LT_AMP_DASH;
	v->a[104753] = anon_sym_GT_AMP_DASH;
	v->a[104754] = anon_sym_LT_LT;
	v->a[104755] = anon_sym_LT_LT_DASH;
	v->a[104756] = anon_sym_AMP;
	v->a[104757] = anon_sym_BQUOTE;
	v->a[104758] = anon_sym_SEMI;
	v->a[104759] = 17;
	small_parse_table_5238(v);
}

void	small_parse_table_5238(t_small_parse_table_array *v)
{
	v->a[104760] = actions(57);
	v->a[104761] = 1;
	v->a[104762] = sym_comment;
	v->a[104763] = actions(3716);
	v->a[104764] = 1;
	v->a[104765] = sym_word;
	v->a[104766] = actions(3720);
	v->a[104767] = 1;
	v->a[104768] = anon_sym_DOLLAR;
	v->a[104769] = actions(3726);
	v->a[104770] = 1;
	v->a[104771] = aux_sym_number_token1;
	v->a[104772] = actions(3728);
	v->a[104773] = 1;
	v->a[104774] = aux_sym_number_token2;
	v->a[104775] = actions(3732);
	v->a[104776] = 1;
	v->a[104777] = anon_sym_DOLLAR_LPAREN;
	v->a[104778] = actions(3740);
	v->a[104779] = 1;
	small_parse_table_5239(v);
}

void	small_parse_table_5239(t_small_parse_table_array *v)
{
	v->a[104780] = sym__brace_start;
	v->a[104781] = actions(6016);
	v->a[104782] = 1;
	v->a[104783] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[104784] = actions(6018);
	v->a[104785] = 1;
	v->a[104786] = sym__special_character;
	v->a[104787] = actions(6020);
	v->a[104788] = 1;
	v->a[104789] = anon_sym_DQUOTE;
	v->a[104790] = actions(6022);
	v->a[104791] = 1;
	v->a[104792] = anon_sym_DOLLAR_LBRACE;
	v->a[104793] = actions(6024);
	v->a[104794] = 1;
	v->a[104795] = anon_sym_BQUOTE;
	v->a[104796] = actions(6026);
	v->a[104797] = 1;
	v->a[104798] = anon_sym_DOLLAR_BQUOTE;
	v->a[104799] = state(1824);
	small_parse_table_5240(v);
}

/* EOF small_parse_table_1047.c */

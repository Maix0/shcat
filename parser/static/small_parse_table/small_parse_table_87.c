/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_87.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_435(t_small_parse_table_array *v)
{
	v->a[8700] = state(373);
	v->a[8701] = 2;
	v->a[8702] = sym_concatenation;
	v->a[8703] = aux_sym_for_statement_repeat1;
	v->a[8704] = state(791);
	v->a[8705] = 7;
	v->a[8706] = sym_arithmetic_expansion;
	v->a[8707] = sym_brace_expression;
	v->a[8708] = sym_string;
	v->a[8709] = sym_number;
	v->a[8710] = sym_simple_expansion;
	v->a[8711] = sym_expansion;
	v->a[8712] = sym_command_substitution;
	v->a[8713] = actions(1388);
	v->a[8714] = 21;
	v->a[8715] = anon_sym_PIPE;
	v->a[8716] = anon_sym_SEMI_SEMI;
	v->a[8717] = anon_sym_SEMI_AMP;
	v->a[8718] = anon_sym_SEMI_SEMI_AMP;
	v->a[8719] = anon_sym_PIPE_AMP;
	small_parse_table_436(v);
}

void	small_parse_table_436(t_small_parse_table_array *v)
{
	v->a[8720] = anon_sym_AMP_AMP;
	v->a[8721] = anon_sym_PIPE_PIPE;
	v->a[8722] = anon_sym_LT;
	v->a[8723] = anon_sym_GT;
	v->a[8724] = anon_sym_GT_GT;
	v->a[8725] = anon_sym_AMP_GT;
	v->a[8726] = anon_sym_AMP_GT_GT;
	v->a[8727] = anon_sym_LT_AMP;
	v->a[8728] = anon_sym_GT_AMP;
	v->a[8729] = anon_sym_GT_PIPE;
	v->a[8730] = anon_sym_LT_AMP_DASH;
	v->a[8731] = anon_sym_GT_AMP_DASH;
	v->a[8732] = anon_sym_LT_LT;
	v->a[8733] = anon_sym_LT_LT_DASH;
	v->a[8734] = anon_sym_AMP;
	v->a[8735] = anon_sym_SEMI;
	v->a[8736] = 19;
	v->a[8737] = actions(3);
	v->a[8738] = 1;
	v->a[8739] = sym_comment;
	small_parse_table_437(v);
}

void	small_parse_table_437(t_small_parse_table_array *v)
{
	v->a[8740] = actions(1971);
	v->a[8741] = 1;
	v->a[8742] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8743] = actions(1973);
	v->a[8744] = 1;
	v->a[8745] = anon_sym_DOLLAR;
	v->a[8746] = actions(1975);
	v->a[8747] = 1;
	v->a[8748] = sym__special_character;
	v->a[8749] = actions(1977);
	v->a[8750] = 1;
	v->a[8751] = anon_sym_DQUOTE;
	v->a[8752] = actions(1979);
	v->a[8753] = 1;
	v->a[8754] = aux_sym_number_token1;
	v->a[8755] = actions(1981);
	v->a[8756] = 1;
	v->a[8757] = aux_sym_number_token2;
	v->a[8758] = actions(1983);
	v->a[8759] = 1;
	small_parse_table_438(v);
}

void	small_parse_table_438(t_small_parse_table_array *v)
{
	v->a[8760] = anon_sym_DOLLAR_LBRACE;
	v->a[8761] = actions(1985);
	v->a[8762] = 1;
	v->a[8763] = anon_sym_DOLLAR_LPAREN;
	v->a[8764] = actions(1987);
	v->a[8765] = 1;
	v->a[8766] = anon_sym_BQUOTE;
	v->a[8767] = actions(1989);
	v->a[8768] = 1;
	v->a[8769] = anon_sym_DOLLAR_BQUOTE;
	v->a[8770] = actions(1991);
	v->a[8771] = 1;
	v->a[8772] = sym_test_operator;
	v->a[8773] = actions(1993);
	v->a[8774] = 1;
	v->a[8775] = sym__brace_start;
	v->a[8776] = state(1205);
	v->a[8777] = 1;
	v->a[8778] = aux_sym__literal_repeat1;
	v->a[8779] = actions(1182);
	small_parse_table_439(v);
}

void	small_parse_table_439(t_small_parse_table_array *v)
{
	v->a[8780] = 2;
	v->a[8781] = sym_file_descriptor;
	v->a[8782] = aux_sym_heredoc_redirect_token1;
	v->a[8783] = actions(1969);
	v->a[8784] = 2;
	v->a[8785] = sym_raw_string;
	v->a[8786] = sym_word;
	v->a[8787] = state(373);
	v->a[8788] = 2;
	v->a[8789] = sym_concatenation;
	v->a[8790] = aux_sym_for_statement_repeat1;
	v->a[8791] = state(791);
	v->a[8792] = 7;
	v->a[8793] = sym_arithmetic_expansion;
	v->a[8794] = sym_brace_expression;
	v->a[8795] = sym_string;
	v->a[8796] = sym_number;
	v->a[8797] = sym_simple_expansion;
	v->a[8798] = sym_expansion;
	v->a[8799] = sym_command_substitution;
	small_parse_table_440(v);
}

/* EOF small_parse_table_87.c */

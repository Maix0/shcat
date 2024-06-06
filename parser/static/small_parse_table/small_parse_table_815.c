/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_815.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4075(t_small_parse_table_array *v)
{
	v->a[81500] = aux_sym_number_token2;
	v->a[81501] = actions(4352);
	v->a[81502] = 1;
	v->a[81503] = anon_sym_DOLLAR_LPAREN;
	v->a[81504] = actions(4360);
	v->a[81505] = 1;
	v->a[81506] = sym_extglob_pattern;
	v->a[81507] = actions(4362);
	v->a[81508] = 1;
	v->a[81509] = sym__brace_start;
	v->a[81510] = actions(4396);
	v->a[81511] = 1;
	v->a[81512] = anon_sym_esac;
	v->a[81513] = actions(4548);
	v->a[81514] = 1;
	v->a[81515] = anon_sym_LPAREN;
	v->a[81516] = actions(4550);
	v->a[81517] = 1;
	v->a[81518] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81519] = actions(4552);
	small_parse_table_4076(v);
}

void	small_parse_table_4076(t_small_parse_table_array *v)
{
	v->a[81520] = 1;
	v->a[81521] = sym__special_character;
	v->a[81522] = actions(4554);
	v->a[81523] = 1;
	v->a[81524] = anon_sym_DQUOTE;
	v->a[81525] = actions(4556);
	v->a[81526] = 1;
	v->a[81527] = anon_sym_DOLLAR_LBRACE;
	v->a[81528] = actions(4558);
	v->a[81529] = 1;
	v->a[81530] = anon_sym_BQUOTE;
	v->a[81531] = actions(4560);
	v->a[81532] = 1;
	v->a[81533] = anon_sym_DOLLAR_BQUOTE;
	v->a[81534] = state(3393);
	v->a[81535] = 1;
	v->a[81536] = aux_sym__literal_repeat1;
	v->a[81537] = state(3943);
	v->a[81538] = 1;
	v->a[81539] = sym_last_case_item;
	small_parse_table_4077(v);
}

void	small_parse_table_4077(t_small_parse_table_array *v)
{
	v->a[81540] = actions(4358);
	v->a[81541] = 2;
	v->a[81542] = sym_test_operator;
	v->a[81543] = sym_raw_string;
	v->a[81544] = state(1813);
	v->a[81545] = 2;
	v->a[81546] = sym_case_item;
	v->a[81547] = aux_sym_case_statement_repeat1;
	v->a[81548] = state(3472);
	v->a[81549] = 2;
	v->a[81550] = sym_concatenation;
	v->a[81551] = sym__extglob_blob;
	v->a[81552] = state(3295);
	v->a[81553] = 7;
	v->a[81554] = sym_arithmetic_expansion;
	v->a[81555] = sym_brace_expression;
	v->a[81556] = sym_string;
	v->a[81557] = sym_number;
	v->a[81558] = sym_simple_expansion;
	v->a[81559] = sym_expansion;
	small_parse_table_4078(v);
}

void	small_parse_table_4078(t_small_parse_table_array *v)
{
	v->a[81560] = sym_command_substitution;
	v->a[81561] = 3;
	v->a[81562] = actions(3);
	v->a[81563] = 1;
	v->a[81564] = sym_comment;
	v->a[81565] = actions(3020);
	v->a[81566] = 5;
	v->a[81567] = sym_file_descriptor;
	v->a[81568] = sym__concat;
	v->a[81569] = sym_test_operator;
	v->a[81570] = sym__brace_start;
	v->a[81571] = aux_sym_heredoc_redirect_token1;
	v->a[81572] = actions(3018);
	v->a[81573] = 25;
	v->a[81574] = anon_sym_AMP_AMP;
	v->a[81575] = anon_sym_PIPE_PIPE;
	v->a[81576] = anon_sym_LT;
	v->a[81577] = anon_sym_GT;
	v->a[81578] = anon_sym_GT_GT;
	v->a[81579] = anon_sym_AMP_GT;
	small_parse_table_4079(v);
}

void	small_parse_table_4079(t_small_parse_table_array *v)
{
	v->a[81580] = anon_sym_AMP_GT_GT;
	v->a[81581] = anon_sym_LT_AMP;
	v->a[81582] = anon_sym_GT_AMP;
	v->a[81583] = anon_sym_GT_PIPE;
	v->a[81584] = anon_sym_LT_AMP_DASH;
	v->a[81585] = anon_sym_GT_AMP_DASH;
	v->a[81586] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81587] = aux_sym_concatenation_token1;
	v->a[81588] = anon_sym_DOLLAR;
	v->a[81589] = sym__special_character;
	v->a[81590] = anon_sym_DQUOTE;
	v->a[81591] = sym_raw_string;
	v->a[81592] = aux_sym_number_token1;
	v->a[81593] = aux_sym_number_token2;
	v->a[81594] = anon_sym_DOLLAR_LBRACE;
	v->a[81595] = anon_sym_DOLLAR_LPAREN;
	v->a[81596] = anon_sym_BQUOTE;
	v->a[81597] = anon_sym_DOLLAR_BQUOTE;
	v->a[81598] = sym_word;
	v->a[81599] = 3;
	small_parse_table_4080(v);
}

/* EOF small_parse_table_815.c */

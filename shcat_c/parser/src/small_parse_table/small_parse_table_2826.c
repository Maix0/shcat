/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2826.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14130(t_small_parse_table_array *v)
{
	v->a[282600] = anon_sym_DOLLAR;
	v->a[282601] = aux_sym_number_token1;
	v->a[282602] = aux_sym_number_token2;
	v->a[282603] = anon_sym_DOLLAR_LPAREN;
	v->a[282604] = sym_word;
	v->a[282605] = actions(12720);
	v->a[282606] = 15;
	v->a[282607] = sym_test_operator;
	v->a[282608] = sym_extglob_pattern;
	v->a[282609] = sym__brace_start;
	v->a[282610] = anon_sym_LPAREN_LPAREN;
	v->a[282611] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[282612] = anon_sym_DOLLAR_LBRACK;
	v->a[282613] = sym__special_character;
	v->a[282614] = anon_sym_DQUOTE;
	v->a[282615] = sym_raw_string;
	v->a[282616] = sym_ansi_c_string;
	v->a[282617] = anon_sym_DOLLAR_LBRACE;
	v->a[282618] = anon_sym_BQUOTE;
	v->a[282619] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_14131(v);
}

void	small_parse_table_14131(t_small_parse_table_array *v)
{
	v->a[282620] = anon_sym_LT_LPAREN;
	v->a[282621] = anon_sym_GT_LPAREN;
	v->a[282622] = 12;
	v->a[282623] = actions(71);
	v->a[282624] = 1;
	v->a[282625] = sym_comment;
	v->a[282626] = actions(4253);
	v->a[282627] = 1;
	v->a[282628] = anon_sym_PIPE;
	v->a[282629] = actions(4348);
	v->a[282630] = 1;
	v->a[282631] = anon_sym_PIPE_AMP;
	v->a[282632] = actions(5994);
	v->a[282633] = 1;
	v->a[282634] = anon_sym_LT_LT;
	v->a[282635] = actions(5996);
	v->a[282636] = 1;
	v->a[282637] = anon_sym_LT_LT_DASH;
	v->a[282638] = actions(7557);
	v->a[282639] = 1;
	small_parse_table_14132(v);
}

void	small_parse_table_14132(t_small_parse_table_array *v)
{
	v->a[282640] = anon_sym_RBRACK;
	v->a[282641] = actions(12686);
	v->a[282642] = 1;
	v->a[282643] = sym_file_descriptor;
	v->a[282644] = actions(5992);
	v->a[282645] = 2;
	v->a[282646] = anon_sym_PIPE_PIPE;
	v->a[282647] = anon_sym_AMP_AMP;
	v->a[282648] = actions(12502);
	v->a[282649] = 2;
	v->a[282650] = anon_sym_LT_AMP_DASH;
	v->a[282651] = anon_sym_GT_AMP_DASH;
	v->a[282652] = actions(12500);
	v->a[282653] = 3;
	v->a[282654] = anon_sym_GT_GT;
	v->a[282655] = anon_sym_AMP_GT_GT;
	v->a[282656] = anon_sym_GT_PIPE;
	v->a[282657] = state(5350);
	v->a[282658] = 3;
	v->a[282659] = sym_file_redirect;
	small_parse_table_14133(v);
}

void	small_parse_table_14133(t_small_parse_table_array *v)
{
	v->a[282660] = sym_heredoc_redirect;
	v->a[282661] = aux_sym_redirected_statement_repeat1;
	v->a[282662] = actions(12498);
	v->a[282663] = 5;
	v->a[282664] = anon_sym_LT;
	v->a[282665] = anon_sym_GT;
	v->a[282666] = anon_sym_AMP_GT;
	v->a[282667] = anon_sym_LT_AMP;
	v->a[282668] = anon_sym_GT_AMP;
	v->a[282669] = 6;
	v->a[282670] = actions(3);
	v->a[282671] = 1;
	v->a[282672] = sym_comment;
	v->a[282673] = actions(11651);
	v->a[282674] = 1;
	v->a[282675] = aux_sym_concatenation_token1;
	v->a[282676] = actions(11653);
	v->a[282677] = 1;
	v->a[282678] = sym__concat;
	v->a[282679] = state(5393);
	small_parse_table_14134(v);
}

void	small_parse_table_14134(t_small_parse_table_array *v)
{
	v->a[282680] = 1;
	v->a[282681] = aux_sym_concatenation_repeat1;
	v->a[282682] = actions(5723);
	v->a[282683] = 2;
	v->a[282684] = sym_file_descriptor;
	v->a[282685] = aux_sym_heredoc_redirect_token1;
	v->a[282686] = actions(5721);
	v->a[282687] = 16;
	v->a[282688] = anon_sym_PIPE_PIPE;
	v->a[282689] = anon_sym_AMP_AMP;
	v->a[282690] = anon_sym_PIPE;
	v->a[282691] = anon_sym_LT;
	v->a[282692] = anon_sym_GT;
	v->a[282693] = anon_sym_LT_LT;
	v->a[282694] = anon_sym_GT_GT;
	v->a[282695] = anon_sym_PIPE_AMP;
	v->a[282696] = anon_sym_AMP_GT;
	v->a[282697] = anon_sym_AMP_GT_GT;
	v->a[282698] = anon_sym_LT_AMP;
	v->a[282699] = anon_sym_GT_AMP;
	small_parse_table_14135(v);
}

/* EOF small_parse_table_2826.c */

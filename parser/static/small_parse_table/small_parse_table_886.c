/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_886.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4430(t_small_parse_table_array *v)
{
	v->a[88600] = sym_comment;
	v->a[88601] = actions(749);
	v->a[88602] = 1;
	v->a[88603] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88604] = actions(751);
	v->a[88605] = 1;
	v->a[88606] = anon_sym_DOLLAR;
	v->a[88607] = actions(753);
	v->a[88608] = 1;
	v->a[88609] = anon_sym_DQUOTE;
	v->a[88610] = actions(755);
	v->a[88611] = 1;
	v->a[88612] = anon_sym_DOLLAR_LBRACE;
	v->a[88613] = actions(757);
	v->a[88614] = 1;
	v->a[88615] = anon_sym_DOLLAR_LPAREN;
	v->a[88616] = actions(759);
	v->a[88617] = 1;
	v->a[88618] = anon_sym_BQUOTE;
	v->a[88619] = state(478);
	small_parse_table_4431(v);
}

void	small_parse_table_4431(t_small_parse_table_array *v)
{
	v->a[88620] = 2;
	v->a[88621] = sym_concatenation;
	v->a[88622] = aux_sym_for_statement_repeat1;
	v->a[88623] = actions(1384);
	v->a[88624] = 3;
	v->a[88625] = sym_raw_string;
	v->a[88626] = sym_number;
	v->a[88627] = sym_word;
	v->a[88628] = state(941);
	v->a[88629] = 5;
	v->a[88630] = sym_arithmetic_expansion;
	v->a[88631] = sym_string;
	v->a[88632] = sym_simple_expansion;
	v->a[88633] = sym_expansion;
	v->a[88634] = sym_command_substitution;
	v->a[88635] = 5;
	v->a[88636] = actions(3);
	v->a[88637] = 1;
	v->a[88638] = sym_comment;
	v->a[88639] = actions(3592);
	small_parse_table_4432(v);
}

void	small_parse_table_4432(t_small_parse_table_array *v)
{
	v->a[88640] = 1;
	v->a[88641] = aux_sym_concatenation_token1;
	v->a[88642] = actions(3595);
	v->a[88643] = 1;
	v->a[88644] = sym__concat;
	v->a[88645] = state(1748);
	v->a[88646] = 1;
	v->a[88647] = aux_sym_concatenation_repeat1;
	v->a[88648] = actions(999);
	v->a[88649] = 13;
	v->a[88650] = anon_sym_SEMI_SEMI;
	v->a[88651] = aux_sym_heredoc_redirect_token1;
	v->a[88652] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88653] = anon_sym_AMP;
	v->a[88654] = anon_sym_DOLLAR;
	v->a[88655] = anon_sym_DQUOTE;
	v->a[88656] = sym_raw_string;
	v->a[88657] = sym_number;
	v->a[88658] = anon_sym_DOLLAR_LBRACE;
	v->a[88659] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4433(v);
}

void	small_parse_table_4433(t_small_parse_table_array *v)
{
	v->a[88660] = anon_sym_BQUOTE;
	v->a[88661] = sym_word;
	v->a[88662] = anon_sym_SEMI;
	v->a[88663] = 3;
	v->a[88664] = actions(1094);
	v->a[88665] = 1;
	v->a[88666] = sym_comment;
	v->a[88667] = actions(2712);
	v->a[88668] = 7;
	v->a[88669] = anon_sym_PIPE;
	v->a[88670] = anon_sym_LT;
	v->a[88671] = anon_sym_GT;
	v->a[88672] = anon_sym_AMP_GT;
	v->a[88673] = anon_sym_LT_AMP;
	v->a[88674] = anon_sym_GT_AMP;
	v->a[88675] = anon_sym_LT_LT;
	v->a[88676] = actions(2710);
	v->a[88677] = 9;
	v->a[88678] = sym_file_descriptor;
	v->a[88679] = anon_sym_AMP_AMP;
	small_parse_table_4434(v);
}

void	small_parse_table_4434(t_small_parse_table_array *v)
{
	v->a[88680] = anon_sym_PIPE_PIPE;
	v->a[88681] = anon_sym_GT_GT;
	v->a[88682] = anon_sym_AMP_GT_GT;
	v->a[88683] = anon_sym_GT_PIPE;
	v->a[88684] = anon_sym_LT_AMP_DASH;
	v->a[88685] = anon_sym_GT_AMP_DASH;
	v->a[88686] = anon_sym_LT_LT_DASH;
	v->a[88687] = 3;
	v->a[88688] = actions(1094);
	v->a[88689] = 1;
	v->a[88690] = sym_comment;
	v->a[88691] = actions(2673);
	v->a[88692] = 7;
	v->a[88693] = anon_sym_PIPE;
	v->a[88694] = anon_sym_LT;
	v->a[88695] = anon_sym_GT;
	v->a[88696] = anon_sym_AMP_GT;
	v->a[88697] = anon_sym_LT_AMP;
	v->a[88698] = anon_sym_GT_AMP;
	v->a[88699] = anon_sym_LT_LT;
	small_parse_table_4435(v);
}

/* EOF small_parse_table_886.c */

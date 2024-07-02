/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_346.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1730(t_small_parse_table_array *v)
{
	v->a[34600] = 1;
	v->a[34601] = anon_sym_DOLLAR;
	v->a[34602] = actions(825);
	v->a[34603] = 1;
	v->a[34604] = anon_sym_DQUOTE;
	v->a[34605] = actions(827);
	v->a[34606] = 1;
	v->a[34607] = anon_sym_DOLLAR_LBRACE;
	v->a[34608] = actions(829);
	v->a[34609] = 1;
	v->a[34610] = anon_sym_DOLLAR_LPAREN;
	v->a[34611] = actions(831);
	v->a[34612] = 1;
	v->a[34613] = anon_sym_BQUOTE;
	v->a[34614] = state(450);
	v->a[34615] = 2;
	v->a[34616] = sym_concatenation;
	v->a[34617] = aux_sym_for_statement_repeat1;
	v->a[34618] = actions(1275);
	v->a[34619] = 3;
	small_parse_table_1731(v);
}

void	small_parse_table_1731(t_small_parse_table_array *v)
{
	v->a[34620] = sym_raw_string;
	v->a[34621] = sym_number;
	v->a[34622] = sym_word;
	v->a[34623] = state(804);
	v->a[34624] = 5;
	v->a[34625] = sym_arithmetic_expansion;
	v->a[34626] = sym_string;
	v->a[34627] = sym_simple_expansion;
	v->a[34628] = sym_expansion;
	v->a[34629] = sym_command_substitution;
	v->a[34630] = actions(513);
	v->a[34631] = 13;
	v->a[34632] = anon_sym_PIPE;
	v->a[34633] = anon_sym_AMP_AMP;
	v->a[34634] = anon_sym_PIPE_PIPE;
	v->a[34635] = anon_sym_LT;
	v->a[34636] = anon_sym_GT;
	v->a[34637] = anon_sym_GT_GT;
	v->a[34638] = anon_sym_LT_AMP;
	v->a[34639] = anon_sym_GT_AMP;
	small_parse_table_1732(v);
}

void	small_parse_table_1732(t_small_parse_table_array *v)
{
	v->a[34640] = anon_sym_GT_PIPE;
	v->a[34641] = anon_sym_LT_GT;
	v->a[34642] = anon_sym_LT_LT;
	v->a[34643] = anon_sym_LT_LT_DASH;
	v->a[34644] = aux_sym_heredoc_redirect_token1;
	v->a[34645] = 12;
	v->a[34646] = actions(3);
	v->a[34647] = 1;
	v->a[34648] = sym_comment;
	v->a[34649] = actions(511);
	v->a[34650] = 1;
	v->a[34651] = sym_file_descriptor;
	v->a[34652] = actions(821);
	v->a[34653] = 1;
	v->a[34654] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34655] = actions(823);
	v->a[34656] = 1;
	v->a[34657] = anon_sym_DOLLAR;
	v->a[34658] = actions(825);
	v->a[34659] = 1;
	small_parse_table_1733(v);
}

void	small_parse_table_1733(t_small_parse_table_array *v)
{
	v->a[34660] = anon_sym_DQUOTE;
	v->a[34661] = actions(827);
	v->a[34662] = 1;
	v->a[34663] = anon_sym_DOLLAR_LBRACE;
	v->a[34664] = actions(829);
	v->a[34665] = 1;
	v->a[34666] = anon_sym_DOLLAR_LPAREN;
	v->a[34667] = actions(831);
	v->a[34668] = 1;
	v->a[34669] = anon_sym_BQUOTE;
	v->a[34670] = state(450);
	v->a[34671] = 2;
	v->a[34672] = sym_concatenation;
	v->a[34673] = aux_sym_for_statement_repeat1;
	v->a[34674] = actions(1275);
	v->a[34675] = 3;
	v->a[34676] = sym_raw_string;
	v->a[34677] = sym_number;
	v->a[34678] = sym_word;
	v->a[34679] = state(804);
	small_parse_table_1734(v);
}

void	small_parse_table_1734(t_small_parse_table_array *v)
{
	v->a[34680] = 5;
	v->a[34681] = sym_arithmetic_expansion;
	v->a[34682] = sym_string;
	v->a[34683] = sym_simple_expansion;
	v->a[34684] = sym_expansion;
	v->a[34685] = sym_command_substitution;
	v->a[34686] = actions(509);
	v->a[34687] = 13;
	v->a[34688] = anon_sym_PIPE;
	v->a[34689] = anon_sym_AMP_AMP;
	v->a[34690] = anon_sym_PIPE_PIPE;
	v->a[34691] = anon_sym_LT;
	v->a[34692] = anon_sym_GT;
	v->a[34693] = anon_sym_GT_GT;
	v->a[34694] = anon_sym_LT_AMP;
	v->a[34695] = anon_sym_GT_AMP;
	v->a[34696] = anon_sym_GT_PIPE;
	v->a[34697] = anon_sym_LT_GT;
	v->a[34698] = anon_sym_LT_LT;
	v->a[34699] = anon_sym_LT_LT_DASH;
	small_parse_table_1735(v);
}

/* EOF small_parse_table_346.c */

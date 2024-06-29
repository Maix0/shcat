/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_266.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1330(t_small_parse_table_array *v)
{
	v->a[26600] = state(2142);
	v->a[26601] = 1;
	v->a[26602] = sym__heredoc_pipeline;
	v->a[26603] = state(2147);
	v->a[26604] = 1;
	v->a[26605] = sym__heredoc_expression;
	v->a[26606] = actions(849);
	v->a[26607] = 2;
	v->a[26608] = anon_sym_PIPE;
	v->a[26609] = anon_sym_PIPE_AMP;
	v->a[26610] = actions(851);
	v->a[26611] = 2;
	v->a[26612] = anon_sym_AMP_AMP;
	v->a[26613] = anon_sym_PIPE_PIPE;
	v->a[26614] = actions(855);
	v->a[26615] = 2;
	v->a[26616] = anon_sym_LT_AMP_DASH;
	v->a[26617] = anon_sym_GT_AMP_DASH;
	v->a[26618] = state(1489);
	v->a[26619] = 2;
	small_parse_table_1331(v);
}

void	small_parse_table_1331(t_small_parse_table_array *v)
{
	v->a[26620] = sym_file_redirect;
	v->a[26621] = aux_sym_redirected_statement_repeat2;
	v->a[26622] = actions(847);
	v->a[26623] = 3;
	v->a[26624] = sym_raw_string;
	v->a[26625] = sym_number;
	v->a[26626] = sym_word;
	v->a[26627] = state(1788);
	v->a[26628] = 5;
	v->a[26629] = sym_arithmetic_expansion;
	v->a[26630] = sym_string;
	v->a[26631] = sym_simple_expansion;
	v->a[26632] = sym_expansion;
	v->a[26633] = sym_command_substitution;
	v->a[26634] = actions(853);
	v->a[26635] = 8;
	v->a[26636] = anon_sym_LT;
	v->a[26637] = anon_sym_GT;
	v->a[26638] = anon_sym_GT_GT;
	v->a[26639] = anon_sym_AMP_GT;
	small_parse_table_1332(v);
}

void	small_parse_table_1332(t_small_parse_table_array *v)
{
	v->a[26640] = anon_sym_AMP_GT_GT;
	v->a[26641] = anon_sym_LT_AMP;
	v->a[26642] = anon_sym_GT_AMP;
	v->a[26643] = anon_sym_GT_PIPE;
	v->a[26644] = 7;
	v->a[26645] = actions(3);
	v->a[26646] = 1;
	v->a[26647] = sym_comment;
	v->a[26648] = actions(837);
	v->a[26649] = 1;
	v->a[26650] = sym_variable_name;
	v->a[26651] = actions(875);
	v->a[26652] = 2;
	v->a[26653] = sym_file_descriptor;
	v->a[26654] = ts_builtin_sym_end;
	v->a[26655] = state(1131);
	v->a[26656] = 2;
	v->a[26657] = sym_variable_assignment;
	v->a[26658] = aux_sym__variable_assignments_repeat1;
	v->a[26659] = state(1133);
	small_parse_table_1333(v);
}

void	small_parse_table_1333(t_small_parse_table_array *v)
{
	v->a[26660] = 3;
	v->a[26661] = sym_file_redirect;
	v->a[26662] = sym_heredoc_redirect;
	v->a[26663] = aux_sym_redirected_statement_repeat1;
	v->a[26664] = actions(762);
	v->a[26665] = 9;
	v->a[26666] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26667] = anon_sym_DOLLAR;
	v->a[26668] = anon_sym_DQUOTE;
	v->a[26669] = sym_raw_string;
	v->a[26670] = sym_number;
	v->a[26671] = anon_sym_DOLLAR_LBRACE;
	v->a[26672] = anon_sym_DOLLAR_LPAREN;
	v->a[26673] = anon_sym_BQUOTE;
	v->a[26674] = sym_word;
	v->a[26675] = actions(766);
	v->a[26676] = 19;
	v->a[26677] = anon_sym_PIPE;
	v->a[26678] = anon_sym_SEMI_SEMI;
	v->a[26679] = anon_sym_AMP_AMP;
	small_parse_table_1334(v);
}

void	small_parse_table_1334(t_small_parse_table_array *v)
{
	v->a[26680] = anon_sym_PIPE_PIPE;
	v->a[26681] = anon_sym_LT;
	v->a[26682] = anon_sym_GT;
	v->a[26683] = anon_sym_GT_GT;
	v->a[26684] = anon_sym_AMP_GT;
	v->a[26685] = anon_sym_AMP_GT_GT;
	v->a[26686] = anon_sym_LT_AMP;
	v->a[26687] = anon_sym_GT_AMP;
	v->a[26688] = anon_sym_GT_PIPE;
	v->a[26689] = anon_sym_LT_AMP_DASH;
	v->a[26690] = anon_sym_GT_AMP_DASH;
	v->a[26691] = anon_sym_LT_LT;
	v->a[26692] = anon_sym_LT_LT_DASH;
	v->a[26693] = aux_sym_heredoc_redirect_token1;
	v->a[26694] = anon_sym_AMP;
	v->a[26695] = anon_sym_SEMI;
	v->a[26696] = 11;
	v->a[26697] = actions(3);
	v->a[26698] = 1;
	v->a[26699] = sym_comment;
	small_parse_table_1335(v);
}

/* EOF small_parse_table_266.c */

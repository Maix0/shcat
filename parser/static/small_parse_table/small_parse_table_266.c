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
	v->a[26600] = actions(861);
	v->a[26601] = 2;
	v->a[26602] = anon_sym_LT_LT;
	v->a[26603] = anon_sym_LT_LT_DASH;
	v->a[26604] = actions(965);
	v->a[26605] = 2;
	v->a[26606] = anon_sym_AMP_AMP;
	v->a[26607] = anon_sym_PIPE_PIPE;
	v->a[26608] = state(1415);
	v->a[26609] = 2;
	v->a[26610] = sym_variable_assignment;
	v->a[26611] = aux_sym__variable_assignments_repeat1;
	v->a[26612] = actions(945);
	v->a[26613] = 3;
	v->a[26614] = aux_sym_heredoc_redirect_token1;
	v->a[26615] = anon_sym_AMP;
	v->a[26616] = anon_sym_SEMI;
	v->a[26617] = state(1322);
	v->a[26618] = 3;
	v->a[26619] = sym_file_redirect;
	small_parse_table_1331(v);
}

void	small_parse_table_1331(t_small_parse_table_array *v)
{
	v->a[26620] = sym_heredoc_redirect;
	v->a[26621] = aux_sym_redirected_statement_repeat1;
	v->a[26622] = actions(805);
	v->a[26623] = 19;
	v->a[26624] = anon_sym_LT;
	v->a[26625] = anon_sym_GT;
	v->a[26626] = anon_sym_GT_GT;
	v->a[26627] = anon_sym_AMP_GT;
	v->a[26628] = anon_sym_AMP_GT_GT;
	v->a[26629] = anon_sym_LT_AMP;
	v->a[26630] = anon_sym_GT_AMP;
	v->a[26631] = anon_sym_GT_PIPE;
	v->a[26632] = anon_sym_LT_AMP_DASH;
	v->a[26633] = anon_sym_GT_AMP_DASH;
	v->a[26634] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26635] = anon_sym_DOLLAR;
	v->a[26636] = anon_sym_DQUOTE;
	v->a[26637] = sym_raw_string;
	v->a[26638] = sym_number;
	v->a[26639] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1332(v);
}

void	small_parse_table_1332(t_small_parse_table_array *v)
{
	v->a[26640] = anon_sym_DOLLAR_LPAREN;
	v->a[26641] = anon_sym_BQUOTE;
	v->a[26642] = sym_word;
	v->a[26643] = 12;
	v->a[26644] = actions(3);
	v->a[26645] = 1;
	v->a[26646] = sym_comment;
	v->a[26647] = actions(713);
	v->a[26648] = 1;
	v->a[26649] = sym_file_descriptor;
	v->a[26650] = actions(824);
	v->a[26651] = 1;
	v->a[26652] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26653] = actions(826);
	v->a[26654] = 1;
	v->a[26655] = anon_sym_DOLLAR;
	v->a[26656] = actions(828);
	v->a[26657] = 1;
	v->a[26658] = anon_sym_DQUOTE;
	v->a[26659] = actions(830);
	small_parse_table_1333(v);
}

void	small_parse_table_1333(t_small_parse_table_array *v)
{
	v->a[26660] = 1;
	v->a[26661] = anon_sym_DOLLAR_LBRACE;
	v->a[26662] = actions(832);
	v->a[26663] = 1;
	v->a[26664] = anon_sym_DOLLAR_LPAREN;
	v->a[26665] = actions(834);
	v->a[26666] = 1;
	v->a[26667] = anon_sym_BQUOTE;
	v->a[26668] = state(1410);
	v->a[26669] = 1;
	v->a[26670] = sym_concatenation;
	v->a[26671] = actions(970);
	v->a[26672] = 3;
	v->a[26673] = sym_raw_string;
	v->a[26674] = sym_number;
	v->a[26675] = sym_word;
	v->a[26676] = state(1334);
	v->a[26677] = 5;
	v->a[26678] = sym_arithmetic_expansion;
	v->a[26679] = sym_string;
	small_parse_table_1334(v);
}

void	small_parse_table_1334(t_small_parse_table_array *v)
{
	v->a[26680] = sym_simple_expansion;
	v->a[26681] = sym_expansion;
	v->a[26682] = sym_command_substitution;
	v->a[26683] = actions(715);
	v->a[26684] = 19;
	v->a[26685] = anon_sym_PIPE;
	v->a[26686] = anon_sym_SEMI_SEMI;
	v->a[26687] = anon_sym_AMP_AMP;
	v->a[26688] = anon_sym_PIPE_PIPE;
	v->a[26689] = anon_sym_LT;
	v->a[26690] = anon_sym_GT;
	v->a[26691] = anon_sym_GT_GT;
	v->a[26692] = anon_sym_AMP_GT;
	v->a[26693] = anon_sym_AMP_GT_GT;
	v->a[26694] = anon_sym_LT_AMP;
	v->a[26695] = anon_sym_GT_AMP;
	v->a[26696] = anon_sym_GT_PIPE;
	v->a[26697] = anon_sym_LT_AMP_DASH;
	v->a[26698] = anon_sym_GT_AMP_DASH;
	v->a[26699] = anon_sym_LT_LT;
	small_parse_table_1335(v);
}

/* EOF small_parse_table_266.c */

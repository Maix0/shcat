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
	v->a[26600] = actions(1060);
	v->a[26601] = 1;
	v->a[26602] = sym__bare_dollar;
	v->a[26603] = state(335);
	v->a[26604] = 1;
	v->a[26605] = aux_sym_command_repeat2;
	v->a[26606] = state(750);
	v->a[26607] = 1;
	v->a[26608] = sym_concatenation;
	v->a[26609] = actions(1039);
	v->a[26610] = 3;
	v->a[26611] = sym_raw_string;
	v->a[26612] = sym_number;
	v->a[26613] = sym_word;
	v->a[26614] = state(630);
	v->a[26615] = 5;
	v->a[26616] = sym_arithmetic_expansion;
	v->a[26617] = sym_string;
	v->a[26618] = sym_simple_expansion;
	v->a[26619] = sym_expansion;
	small_parse_table_1331(v);
}

void	small_parse_table_1331(t_small_parse_table_array *v)
{
	v->a[26620] = sym_command_substitution;
	v->a[26621] = actions(506);
	v->a[26622] = 12;
	v->a[26623] = anon_sym_PIPE;
	v->a[26624] = anon_sym_AMP_AMP;
	v->a[26625] = anon_sym_PIPE_PIPE;
	v->a[26626] = anon_sym_LT;
	v->a[26627] = anon_sym_GT;
	v->a[26628] = anon_sym_GT_GT;
	v->a[26629] = anon_sym_LT_AMP;
	v->a[26630] = anon_sym_GT_AMP;
	v->a[26631] = anon_sym_GT_PIPE;
	v->a[26632] = anon_sym_LT_GT;
	v->a[26633] = anon_sym_LT_LT;
	v->a[26634] = anon_sym_LT_LT_DASH;
	v->a[26635] = 6;
	v->a[26636] = actions(3);
	v->a[26637] = 1;
	v->a[26638] = sym_comment;
	v->a[26639] = actions(1063);
	small_parse_table_1332(v);
}

void	small_parse_table_1332(t_small_parse_table_array *v)
{
	v->a[26640] = 1;
	v->a[26641] = aux_sym_concatenation_token1;
	v->a[26642] = actions(1066);
	v->a[26643] = 1;
	v->a[26644] = sym__concat;
	v->a[26645] = state(336);
	v->a[26646] = 1;
	v->a[26647] = aux_sym_concatenation_repeat1;
	v->a[26648] = actions(1011);
	v->a[26649] = 2;
	v->a[26650] = sym__bare_dollar;
	v->a[26651] = ts_builtin_sym_end;
	v->a[26652] = actions(1003);
	v->a[26653] = 24;
	v->a[26654] = anon_sym_PIPE;
	v->a[26655] = anon_sym_SEMI_SEMI;
	v->a[26656] = anon_sym_AMP_AMP;
	v->a[26657] = anon_sym_PIPE_PIPE;
	v->a[26658] = anon_sym_LT;
	v->a[26659] = anon_sym_GT;
	small_parse_table_1333(v);
}

void	small_parse_table_1333(t_small_parse_table_array *v)
{
	v->a[26660] = anon_sym_GT_GT;
	v->a[26661] = anon_sym_LT_AMP;
	v->a[26662] = anon_sym_GT_AMP;
	v->a[26663] = anon_sym_GT_PIPE;
	v->a[26664] = anon_sym_LT_GT;
	v->a[26665] = anon_sym_LT_LT;
	v->a[26666] = anon_sym_LT_LT_DASH;
	v->a[26667] = aux_sym_heredoc_redirect_token1;
	v->a[26668] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26669] = anon_sym_DOLLAR;
	v->a[26670] = anon_sym_DQUOTE;
	v->a[26671] = sym_raw_string;
	v->a[26672] = sym_number;
	v->a[26673] = anon_sym_DOLLAR_LBRACE;
	v->a[26674] = anon_sym_DOLLAR_LPAREN;
	v->a[26675] = anon_sym_BQUOTE;
	v->a[26676] = sym_word;
	v->a[26677] = anon_sym_SEMI;
	v->a[26678] = 6;
	v->a[26679] = actions(3);
	small_parse_table_1334(v);
}

void	small_parse_table_1334(t_small_parse_table_array *v)
{
	v->a[26680] = 1;
	v->a[26681] = sym_comment;
	v->a[26682] = actions(1027);
	v->a[26683] = 1;
	v->a[26684] = aux_sym_concatenation_token1;
	v->a[26685] = actions(1029);
	v->a[26686] = 1;
	v->a[26687] = sym__concat;
	v->a[26688] = state(362);
	v->a[26689] = 1;
	v->a[26690] = aux_sym_concatenation_repeat1;
	v->a[26691] = actions(1069);
	v->a[26692] = 2;
	v->a[26693] = sym_variable_name;
	v->a[26694] = ts_builtin_sym_end;
	v->a[26695] = actions(1071);
	v->a[26696] = 24;
	v->a[26697] = anon_sym_PIPE;
	v->a[26698] = anon_sym_SEMI_SEMI;
	v->a[26699] = anon_sym_AMP_AMP;
	small_parse_table_1335(v);
}

/* EOF small_parse_table_266.c */

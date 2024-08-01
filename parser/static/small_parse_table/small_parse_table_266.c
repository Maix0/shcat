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
	v->a[26600] = anon_sym_DOLLAR;
	v->a[26601] = anon_sym_DQUOTE;
	v->a[26602] = sym_raw_string;
	v->a[26603] = sym_number;
	v->a[26604] = anon_sym_DOLLAR_LBRACE;
	v->a[26605] = anon_sym_DOLLAR_LPAREN;
	v->a[26606] = anon_sym_BQUOTE;
	v->a[26607] = sym_word;
	v->a[26608] = anon_sym_SEMI;
	v->a[26609] = 15;
	v->a[26610] = actions(3);
	v->a[26611] = 1;
	v->a[26612] = sym_comment;
	v->a[26613] = actions(99);
	v->a[26614] = 1;
	v->a[26615] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26616] = actions(101);
	v->a[26617] = 1;
	v->a[26618] = anon_sym_DOLLAR;
	v->a[26619] = actions(103);
	small_parse_table_1331(v);
}

void	small_parse_table_1331(t_small_parse_table_array *v)
{
	v->a[26620] = 1;
	v->a[26621] = anon_sym_DQUOTE;
	v->a[26622] = actions(107);
	v->a[26623] = 1;
	v->a[26624] = anon_sym_DOLLAR_LBRACE;
	v->a[26625] = actions(109);
	v->a[26626] = 1;
	v->a[26627] = anon_sym_DOLLAR_LPAREN;
	v->a[26628] = actions(111);
	v->a[26629] = 1;
	v->a[26630] = anon_sym_BQUOTE;
	v->a[26631] = actions(341);
	v->a[26632] = 1;
	v->a[26633] = sym_variable_name;
	v->a[26634] = state(173);
	v->a[26635] = 1;
	v->a[26636] = sym_command_name;
	v->a[26637] = state(546);
	v->a[26638] = 1;
	v->a[26639] = sym_concatenation;
	small_parse_table_1332(v);
}

void	small_parse_table_1332(t_small_parse_table_array *v)
{
	v->a[26640] = state(1083);
	v->a[26641] = 1;
	v->a[26642] = sym_file_redirect;
	v->a[26643] = state(792);
	v->a[26644] = 2;
	v->a[26645] = sym_variable_assignment;
	v->a[26646] = aux_sym_command_repeat1;
	v->a[26647] = actions(105);
	v->a[26648] = 3;
	v->a[26649] = sym_raw_string;
	v->a[26650] = sym_number;
	v->a[26651] = sym_word;
	v->a[26652] = actions(758);
	v->a[26653] = 3;
	v->a[26654] = anon_sym_LT;
	v->a[26655] = anon_sym_GT;
	v->a[26656] = anon_sym_GT_GT;
	v->a[26657] = state(276);
	v->a[26658] = 5;
	v->a[26659] = sym_arithmetic_expansion;
	small_parse_table_1333(v);
}

void	small_parse_table_1333(t_small_parse_table_array *v)
{
	v->a[26660] = sym_string;
	v->a[26661] = sym_simple_expansion;
	v->a[26662] = sym_expansion;
	v->a[26663] = sym_command_substitution;
	v->a[26664] = 6;
	v->a[26665] = actions(3);
	v->a[26666] = 1;
	v->a[26667] = sym_comment;
	v->a[26668] = actions(878);
	v->a[26669] = 1;
	v->a[26670] = ts_builtin_sym_end;
	v->a[26671] = actions(1134);
	v->a[26672] = 1;
	v->a[26673] = aux_sym_concatenation_token1;
	v->a[26674] = actions(1170);
	v->a[26675] = 1;
	v->a[26676] = sym__concat;
	v->a[26677] = state(360);
	v->a[26678] = 1;
	v->a[26679] = aux_sym_concatenation_repeat1;
	small_parse_table_1334(v);
}

void	small_parse_table_1334(t_small_parse_table_array *v)
{
	v->a[26680] = actions(880);
	v->a[26681] = 19;
	v->a[26682] = anon_sym_PIPE;
	v->a[26683] = anon_sym_SEMI_SEMI;
	v->a[26684] = anon_sym_AMP_AMP;
	v->a[26685] = anon_sym_PIPE_PIPE;
	v->a[26686] = anon_sym_LT;
	v->a[26687] = anon_sym_GT;
	v->a[26688] = anon_sym_GT_GT;
	v->a[26689] = anon_sym_LT_LT;
	v->a[26690] = aux_sym_heredoc_redirect_token1;
	v->a[26691] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26692] = anon_sym_DOLLAR;
	v->a[26693] = anon_sym_DQUOTE;
	v->a[26694] = sym_raw_string;
	v->a[26695] = sym_number;
	v->a[26696] = anon_sym_DOLLAR_LBRACE;
	v->a[26697] = anon_sym_DOLLAR_LPAREN;
	v->a[26698] = anon_sym_BQUOTE;
	v->a[26699] = sym_word;
	small_parse_table_1335(v);
}

/* EOF small_parse_table_266.c */

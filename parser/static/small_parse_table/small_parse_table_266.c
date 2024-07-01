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
	v->a[26600] = anon_sym_LT_LT_DASH;
	v->a[26601] = aux_sym_heredoc_redirect_token1;
	v->a[26602] = anon_sym_AMP;
	v->a[26603] = anon_sym_SEMI;
	v->a[26604] = 11;
	v->a[26605] = actions(3);
	v->a[26606] = 1;
	v->a[26607] = sym_comment;
	v->a[26608] = actions(575);
	v->a[26609] = 1;
	v->a[26610] = sym_file_descriptor;
	v->a[26611] = actions(699);
	v->a[26612] = 1;
	v->a[26613] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26614] = actions(701);
	v->a[26615] = 1;
	v->a[26616] = anon_sym_DOLLAR;
	v->a[26617] = actions(703);
	v->a[26618] = 1;
	v->a[26619] = anon_sym_DQUOTE;
	small_parse_table_1331(v);
}

void	small_parse_table_1331(t_small_parse_table_array *v)
{
	v->a[26620] = actions(705);
	v->a[26621] = 1;
	v->a[26622] = anon_sym_DOLLAR_LBRACE;
	v->a[26623] = actions(707);
	v->a[26624] = 1;
	v->a[26625] = anon_sym_DOLLAR_LPAREN;
	v->a[26626] = state(272);
	v->a[26627] = 2;
	v->a[26628] = sym_concatenation;
	v->a[26629] = aux_sym_for_statement_repeat1;
	v->a[26630] = actions(1001);
	v->a[26631] = 3;
	v->a[26632] = sym_raw_string;
	v->a[26633] = sym_number;
	v->a[26634] = sym_word;
	v->a[26635] = state(628);
	v->a[26636] = 5;
	v->a[26637] = sym_arithmetic_expansion;
	v->a[26638] = sym_string;
	v->a[26639] = sym_simple_expansion;
	small_parse_table_1332(v);
}

void	small_parse_table_1332(t_small_parse_table_array *v)
{
	v->a[26640] = sym_expansion;
	v->a[26641] = sym_command_substitution;
	v->a[26642] = actions(573);
	v->a[26643] = 18;
	v->a[26644] = anon_sym_PIPE;
	v->a[26645] = anon_sym_SEMI_SEMI;
	v->a[26646] = anon_sym_AMP_AMP;
	v->a[26647] = anon_sym_PIPE_PIPE;
	v->a[26648] = anon_sym_LT;
	v->a[26649] = anon_sym_GT;
	v->a[26650] = anon_sym_GT_GT;
	v->a[26651] = anon_sym_LT_AMP;
	v->a[26652] = anon_sym_GT_AMP;
	v->a[26653] = anon_sym_GT_PIPE;
	v->a[26654] = anon_sym_LT_AMP_DASH;
	v->a[26655] = anon_sym_GT_AMP_DASH;
	v->a[26656] = anon_sym_LT_LT;
	v->a[26657] = anon_sym_LT_LT_DASH;
	v->a[26658] = aux_sym_heredoc_redirect_token1;
	v->a[26659] = anon_sym_AMP;
	small_parse_table_1333(v);
}

void	small_parse_table_1333(t_small_parse_table_array *v)
{
	v->a[26660] = anon_sym_BQUOTE;
	v->a[26661] = anon_sym_SEMI;
	v->a[26662] = 4;
	v->a[26663] = actions(870);
	v->a[26664] = 1;
	v->a[26665] = sym_comment;
	v->a[26666] = actions(868);
	v->a[26667] = 2;
	v->a[26668] = anon_sym_PLUS_PLUS2;
	v->a[26669] = anon_sym_DASH_DASH2;
	v->a[26670] = actions(872);
	v->a[26671] = 13;
	v->a[26672] = anon_sym_PIPE;
	v->a[26673] = anon_sym_EQ;
	v->a[26674] = anon_sym_LT;
	v->a[26675] = anon_sym_GT;
	v->a[26676] = anon_sym_GT_GT;
	v->a[26677] = anon_sym_LT_LT;
	v->a[26678] = anon_sym_CARET;
	v->a[26679] = anon_sym_AMP;
	small_parse_table_1334(v);
}

void	small_parse_table_1334(t_small_parse_table_array *v)
{
	v->a[26680] = anon_sym_PLUS;
	v->a[26681] = anon_sym_DASH;
	v->a[26682] = anon_sym_STAR;
	v->a[26683] = anon_sym_SLASH;
	v->a[26684] = anon_sym_PERCENT;
	v->a[26685] = actions(874);
	v->a[26686] = 19;
	v->a[26687] = anon_sym_AMP_AMP;
	v->a[26688] = anon_sym_PIPE_PIPE;
	v->a[26689] = anon_sym_RPAREN_RPAREN;
	v->a[26690] = anon_sym_PLUS_EQ;
	v->a[26691] = anon_sym_DASH_EQ;
	v->a[26692] = anon_sym_STAR_EQ;
	v->a[26693] = anon_sym_SLASH_EQ;
	v->a[26694] = anon_sym_PERCENT_EQ;
	v->a[26695] = anon_sym_LT_LT_EQ;
	v->a[26696] = anon_sym_GT_GT_EQ;
	v->a[26697] = anon_sym_AMP_EQ;
	v->a[26698] = anon_sym_CARET_EQ;
	v->a[26699] = anon_sym_PIPE_EQ;
	small_parse_table_1335(v);
}

/* EOF small_parse_table_266.c */

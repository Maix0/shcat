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
	v->a[26600] = aux_sym_number_token1;
	v->a[26601] = actions(986);
	v->a[26602] = 1;
	v->a[26603] = aux_sym_number_token2;
	v->a[26604] = actions(988);
	v->a[26605] = 1;
	v->a[26606] = anon_sym_DOLLAR_LBRACE;
	v->a[26607] = actions(990);
	v->a[26608] = 1;
	v->a[26609] = anon_sym_DOLLAR_LPAREN;
	v->a[26610] = actions(992);
	v->a[26611] = 1;
	v->a[26612] = anon_sym_BQUOTE;
	v->a[26613] = state(1282);
	v->a[26614] = 1;
	v->a[26615] = sym_concatenation;
	v->a[26616] = actions(996);
	v->a[26617] = 2;
	v->a[26618] = sym_raw_string;
	v->a[26619] = sym_word;
	small_parse_table_1331(v);
}

void	small_parse_table_1331(t_small_parse_table_array *v)
{
	v->a[26620] = state(1059);
	v->a[26621] = 6;
	v->a[26622] = sym_arithmetic_expansion;
	v->a[26623] = sym_string;
	v->a[26624] = sym_number;
	v->a[26625] = sym_simple_expansion;
	v->a[26626] = sym_expansion;
	v->a[26627] = sym_command_substitution;
	v->a[26628] = actions(757);
	v->a[26629] = 20;
	v->a[26630] = anon_sym_esac;
	v->a[26631] = anon_sym_PIPE;
	v->a[26632] = anon_sym_SEMI_SEMI;
	v->a[26633] = anon_sym_AMP_AMP;
	v->a[26634] = anon_sym_PIPE_PIPE;
	v->a[26635] = anon_sym_LT;
	v->a[26636] = anon_sym_GT;
	v->a[26637] = anon_sym_GT_GT;
	v->a[26638] = anon_sym_AMP_GT;
	v->a[26639] = anon_sym_AMP_GT_GT;
	small_parse_table_1332(v);
}

void	small_parse_table_1332(t_small_parse_table_array *v)
{
	v->a[26640] = anon_sym_LT_AMP;
	v->a[26641] = anon_sym_GT_AMP;
	v->a[26642] = anon_sym_GT_PIPE;
	v->a[26643] = anon_sym_LT_AMP_DASH;
	v->a[26644] = anon_sym_GT_AMP_DASH;
	v->a[26645] = anon_sym_LT_LT;
	v->a[26646] = anon_sym_LT_LT_DASH;
	v->a[26647] = aux_sym_heredoc_redirect_token1;
	v->a[26648] = anon_sym_AMP;
	v->a[26649] = anon_sym_SEMI;
	v->a[26650] = 13;
	v->a[26651] = actions(3);
	v->a[26652] = 1;
	v->a[26653] = sym_comment;
	v->a[26654] = actions(555);
	v->a[26655] = 1;
	v->a[26656] = sym_file_descriptor;
	v->a[26657] = actions(761);
	v->a[26658] = 1;
	v->a[26659] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1333(v);
}

void	small_parse_table_1333(t_small_parse_table_array *v)
{
	v->a[26660] = actions(763);
	v->a[26661] = 1;
	v->a[26662] = anon_sym_DOLLAR;
	v->a[26663] = actions(765);
	v->a[26664] = 1;
	v->a[26665] = anon_sym_DQUOTE;
	v->a[26666] = actions(767);
	v->a[26667] = 1;
	v->a[26668] = aux_sym_number_token1;
	v->a[26669] = actions(769);
	v->a[26670] = 1;
	v->a[26671] = aux_sym_number_token2;
	v->a[26672] = actions(771);
	v->a[26673] = 1;
	v->a[26674] = anon_sym_DOLLAR_LBRACE;
	v->a[26675] = actions(773);
	v->a[26676] = 1;
	v->a[26677] = anon_sym_DOLLAR_LPAREN;
	v->a[26678] = actions(955);
	v->a[26679] = 2;
	small_parse_table_1334(v);
}

void	small_parse_table_1334(t_small_parse_table_array *v)
{
	v->a[26680] = sym_raw_string;
	v->a[26681] = sym_word;
	v->a[26682] = state(245);
	v->a[26683] = 2;
	v->a[26684] = sym_concatenation;
	v->a[26685] = aux_sym_for_statement_repeat1;
	v->a[26686] = state(566);
	v->a[26687] = 6;
	v->a[26688] = sym_arithmetic_expansion;
	v->a[26689] = sym_string;
	v->a[26690] = sym_number;
	v->a[26691] = sym_simple_expansion;
	v->a[26692] = sym_expansion;
	v->a[26693] = sym_command_substitution;
	v->a[26694] = actions(553);
	v->a[26695] = 20;
	v->a[26696] = anon_sym_PIPE;
	v->a[26697] = anon_sym_SEMI_SEMI;
	v->a[26698] = anon_sym_AMP_AMP;
	v->a[26699] = anon_sym_PIPE_PIPE;
	small_parse_table_1335(v);
}

/* EOF small_parse_table_266.c */

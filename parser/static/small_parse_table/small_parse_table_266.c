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
	v->a[26600] = anon_sym_AMP_GT_GT;
	v->a[26601] = anon_sym_LT_AMP;
	v->a[26602] = anon_sym_GT_AMP;
	v->a[26603] = anon_sym_GT_PIPE;
	v->a[26604] = anon_sym_LT_AMP_DASH;
	v->a[26605] = anon_sym_GT_AMP_DASH;
	v->a[26606] = anon_sym_LT_LT;
	v->a[26607] = anon_sym_LT_LT_DASH;
	v->a[26608] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26609] = anon_sym_AMP;
	v->a[26610] = anon_sym_DOLLAR;
	v->a[26611] = anon_sym_DQUOTE;
	v->a[26612] = sym_raw_string;
	v->a[26613] = aux_sym_number_token1;
	v->a[26614] = aux_sym_number_token2;
	v->a[26615] = anon_sym_DOLLAR_LBRACE;
	v->a[26616] = anon_sym_DOLLAR_LPAREN;
	v->a[26617] = anon_sym_BQUOTE;
	v->a[26618] = anon_sym_DOLLAR_BQUOTE;
	v->a[26619] = aux_sym__simple_variable_name_token1;
	small_parse_table_1331(v);
}

void	small_parse_table_1331(t_small_parse_table_array *v)
{
	v->a[26620] = sym_word;
	v->a[26621] = anon_sym_SEMI;
	v->a[26622] = 6;
	v->a[26623] = actions(3);
	v->a[26624] = 1;
	v->a[26625] = sym_comment;
	v->a[26626] = actions(3256);
	v->a[26627] = 1;
	v->a[26628] = aux_sym_concatenation_token1;
	v->a[26629] = actions(3259);
	v->a[26630] = 1;
	v->a[26631] = sym__concat;
	v->a[26632] = state(640);
	v->a[26633] = 1;
	v->a[26634] = aux_sym_concatenation_repeat1;
	v->a[26635] = actions(2654);
	v->a[26636] = 6;
	v->a[26637] = sym_file_descriptor;
	v->a[26638] = sym_test_operator;
	v->a[26639] = sym__bare_dollar;
	small_parse_table_1332(v);
}

void	small_parse_table_1332(t_small_parse_table_array *v)
{
	v->a[26640] = sym__brace_start;
	v->a[26641] = ts_builtin_sym_end;
	v->a[26642] = aux_sym_heredoc_redirect_token1;
	v->a[26643] = actions(2652);
	v->a[26644] = 32;
	v->a[26645] = anon_sym_LPAREN;
	v->a[26646] = anon_sym_PIPE;
	v->a[26647] = anon_sym_SEMI_SEMI;
	v->a[26648] = anon_sym_PIPE_AMP;
	v->a[26649] = anon_sym_AMP_AMP;
	v->a[26650] = anon_sym_PIPE_PIPE;
	v->a[26651] = anon_sym_LT;
	v->a[26652] = anon_sym_GT;
	v->a[26653] = anon_sym_GT_GT;
	v->a[26654] = anon_sym_AMP_GT;
	v->a[26655] = anon_sym_AMP_GT_GT;
	v->a[26656] = anon_sym_LT_AMP;
	v->a[26657] = anon_sym_GT_AMP;
	v->a[26658] = anon_sym_GT_PIPE;
	v->a[26659] = anon_sym_LT_AMP_DASH;
	small_parse_table_1333(v);
}

void	small_parse_table_1333(t_small_parse_table_array *v)
{
	v->a[26660] = anon_sym_GT_AMP_DASH;
	v->a[26661] = anon_sym_LT_LT;
	v->a[26662] = anon_sym_LT_LT_DASH;
	v->a[26663] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26664] = anon_sym_AMP;
	v->a[26665] = anon_sym_DOLLAR;
	v->a[26666] = sym__special_character;
	v->a[26667] = anon_sym_DQUOTE;
	v->a[26668] = sym_raw_string;
	v->a[26669] = aux_sym_number_token1;
	v->a[26670] = aux_sym_number_token2;
	v->a[26671] = anon_sym_DOLLAR_LBRACE;
	v->a[26672] = anon_sym_DOLLAR_LPAREN;
	v->a[26673] = anon_sym_BQUOTE;
	v->a[26674] = anon_sym_DOLLAR_BQUOTE;
	v->a[26675] = sym_word;
	v->a[26676] = anon_sym_SEMI;
	v->a[26677] = 19;
	v->a[26678] = actions(57);
	v->a[26679] = 1;
	small_parse_table_1334(v);
}

void	small_parse_table_1334(t_small_parse_table_array *v)
{
	v->a[26680] = sym_comment;
	v->a[26681] = actions(3262);
	v->a[26682] = 1;
	v->a[26683] = sym_word;
	v->a[26684] = actions(3264);
	v->a[26685] = 1;
	v->a[26686] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26687] = actions(3266);
	v->a[26688] = 1;
	v->a[26689] = anon_sym_DOLLAR;
	v->a[26690] = actions(3268);
	v->a[26691] = 1;
	v->a[26692] = sym__special_character;
	v->a[26693] = actions(3270);
	v->a[26694] = 1;
	v->a[26695] = anon_sym_DQUOTE;
	v->a[26696] = actions(3274);
	v->a[26697] = 1;
	v->a[26698] = aux_sym_number_token1;
	v->a[26699] = actions(3276);
	small_parse_table_1335(v);
}

/* EOF small_parse_table_266.c */

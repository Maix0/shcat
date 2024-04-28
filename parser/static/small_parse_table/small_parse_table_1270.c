/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1270.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6350(t_small_parse_table_array *v)
{
	v->a[127000] = actions(6486);
	v->a[127001] = 1;
	v->a[127002] = anon_sym_DOLLAR_LBRACK;
	v->a[127003] = actions(6488);
	v->a[127004] = 1;
	v->a[127005] = anon_sym_DOLLAR;
	v->a[127006] = actions(6490);
	v->a[127007] = 1;
	v->a[127008] = sym__special_character;
	v->a[127009] = actions(6492);
	v->a[127010] = 1;
	v->a[127011] = anon_sym_DQUOTE;
	v->a[127012] = actions(6494);
	v->a[127013] = 1;
	v->a[127014] = aux_sym_number_token1;
	v->a[127015] = actions(6496);
	v->a[127016] = 1;
	v->a[127017] = aux_sym_number_token2;
	v->a[127018] = actions(6498);
	v->a[127019] = 1;
	small_parse_table_6351(v);
}

void	small_parse_table_6351(t_small_parse_table_array *v)
{
	v->a[127020] = anon_sym_DOLLAR_LBRACE;
	v->a[127021] = actions(6500);
	v->a[127022] = 1;
	v->a[127023] = anon_sym_DOLLAR_LPAREN;
	v->a[127024] = actions(6502);
	v->a[127025] = 1;
	v->a[127026] = anon_sym_BQUOTE;
	v->a[127027] = actions(6504);
	v->a[127028] = 1;
	v->a[127029] = anon_sym_DOLLAR_BQUOTE;
	v->a[127030] = actions(6508);
	v->a[127031] = 1;
	v->a[127032] = sym_test_operator;
	v->a[127033] = actions(6510);
	v->a[127034] = 1;
	v->a[127035] = sym_extglob_pattern;
	v->a[127036] = actions(6512);
	v->a[127037] = 1;
	v->a[127038] = sym__brace_start;
	v->a[127039] = actions(6628);
	small_parse_table_6352(v);
}

void	small_parse_table_6352(t_small_parse_table_array *v)
{
	v->a[127040] = 1;
	v->a[127041] = anon_sym_esac;
	v->a[127042] = actions(6630);
	v->a[127043] = 1;
	v->a[127044] = aux_sym_heredoc_redirect_token1;
	v->a[127045] = state(6426);
	v->a[127046] = 1;
	v->a[127047] = aux_sym__literal_repeat1;
	v->a[127048] = state(7402);
	v->a[127049] = 1;
	v->a[127050] = sym_last_case_item;
	v->a[127051] = actions(6476);
	v->a[127052] = 2;
	v->a[127053] = anon_sym_LPAREN_LPAREN;
	v->a[127054] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[127055] = actions(6506);
	v->a[127056] = 2;
	v->a[127057] = anon_sym_LT_LPAREN;
	v->a[127058] = anon_sym_GT_LPAREN;
	v->a[127059] = state(3411);
	small_parse_table_6353(v);
}

void	small_parse_table_6353(t_small_parse_table_array *v)
{
	v->a[127060] = 2;
	v->a[127061] = sym_case_item;
	v->a[127062] = aux_sym_case_statement_repeat1;
	v->a[127063] = state(6695);
	v->a[127064] = 2;
	v->a[127065] = sym_concatenation;
	v->a[127066] = sym__extglob_blob;
	v->a[127067] = actions(6474);
	v->a[127068] = 3;
	v->a[127069] = sym_raw_string;
	v->a[127070] = sym_ansi_c_string;
	v->a[127071] = sym_word;
	v->a[127072] = actions(6626);
	v->a[127073] = 3;
	v->a[127074] = anon_sym_SEMI;
	v->a[127075] = anon_sym_AMP;
	v->a[127076] = anon_sym_SEMI_SEMI;
	v->a[127077] = state(6303);
	v->a[127078] = 9;
	v->a[127079] = sym_arithmetic_expansion;
	small_parse_table_6354(v);
}

void	small_parse_table_6354(t_small_parse_table_array *v)
{
	v->a[127080] = sym_brace_expression;
	v->a[127081] = sym_string;
	v->a[127082] = sym_translated_string;
	v->a[127083] = sym_number;
	v->a[127084] = sym_simple_expansion;
	v->a[127085] = sym_expansion;
	v->a[127086] = sym_command_substitution;
	v->a[127087] = sym_process_substitution;
	v->a[127088] = 5;
	v->a[127089] = actions(71);
	v->a[127090] = 1;
	v->a[127091] = sym_comment;
	v->a[127092] = actions(6518);
	v->a[127093] = 1;
	v->a[127094] = sym__special_character;
	v->a[127095] = state(2366);
	v->a[127096] = 1;
	v->a[127097] = aux_sym__literal_repeat1;
	v->a[127098] = actions(4546);
	v->a[127099] = 14;
	small_parse_table_6355(v);
}

/* EOF small_parse_table_1270.c */

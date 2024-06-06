/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_370.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1850(t_small_parse_table_array *v)
{
	v->a[37000] = anon_sym_DQUOTE;
	v->a[37001] = sym_raw_string;
	v->a[37002] = aux_sym_number_token1;
	v->a[37003] = aux_sym_number_token2;
	v->a[37004] = anon_sym_DOLLAR_LBRACE;
	v->a[37005] = anon_sym_DOLLAR_LPAREN;
	v->a[37006] = anon_sym_BQUOTE;
	v->a[37007] = anon_sym_DOLLAR_BQUOTE;
	v->a[37008] = aux_sym__simple_variable_name_token1;
	v->a[37009] = sym_word;
	v->a[37010] = anon_sym_SEMI;
	v->a[37011] = 3;
	v->a[37012] = actions(3);
	v->a[37013] = 1;
	v->a[37014] = sym_comment;
	v->a[37015] = actions(2888);
	v->a[37016] = 5;
	v->a[37017] = sym_file_descriptor;
	v->a[37018] = sym__concat;
	v->a[37019] = sym_test_operator;
	small_parse_table_1851(v);
}

void	small_parse_table_1851(t_small_parse_table_array *v)
{
	v->a[37020] = sym__brace_start;
	v->a[37021] = aux_sym_heredoc_redirect_token1;
	v->a[37022] = actions(2886);
	v->a[37023] = 35;
	v->a[37024] = anon_sym_PIPE;
	v->a[37025] = anon_sym_SEMI_SEMI;
	v->a[37026] = anon_sym_SEMI_AMP;
	v->a[37027] = anon_sym_SEMI_SEMI_AMP;
	v->a[37028] = anon_sym_PIPE_AMP;
	v->a[37029] = anon_sym_AMP_AMP;
	v->a[37030] = anon_sym_PIPE_PIPE;
	v->a[37031] = anon_sym_LT;
	v->a[37032] = anon_sym_GT;
	v->a[37033] = anon_sym_GT_GT;
	v->a[37034] = anon_sym_AMP_GT;
	v->a[37035] = anon_sym_AMP_GT_GT;
	v->a[37036] = anon_sym_LT_AMP;
	v->a[37037] = anon_sym_GT_AMP;
	v->a[37038] = anon_sym_GT_PIPE;
	v->a[37039] = anon_sym_LT_AMP_DASH;
	small_parse_table_1852(v);
}

void	small_parse_table_1852(t_small_parse_table_array *v)
{
	v->a[37040] = anon_sym_GT_AMP_DASH;
	v->a[37041] = anon_sym_LT_LT;
	v->a[37042] = anon_sym_LT_LT_DASH;
	v->a[37043] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37044] = anon_sym_AMP;
	v->a[37045] = aux_sym_concatenation_token1;
	v->a[37046] = anon_sym_DOLLAR;
	v->a[37047] = sym__special_character;
	v->a[37048] = anon_sym_DQUOTE;
	v->a[37049] = sym_raw_string;
	v->a[37050] = aux_sym_number_token1;
	v->a[37051] = aux_sym_number_token2;
	v->a[37052] = anon_sym_DOLLAR_LBRACE;
	v->a[37053] = anon_sym_DOLLAR_LPAREN;
	v->a[37054] = anon_sym_BQUOTE;
	v->a[37055] = anon_sym_DOLLAR_BQUOTE;
	v->a[37056] = aux_sym__simple_variable_name_token1;
	v->a[37057] = sym_word;
	v->a[37058] = anon_sym_SEMI;
	v->a[37059] = 3;
	small_parse_table_1853(v);
}

void	small_parse_table_1853(t_small_parse_table_array *v)
{
	v->a[37060] = actions(3);
	v->a[37061] = 1;
	v->a[37062] = sym_comment;
	v->a[37063] = actions(3062);
	v->a[37064] = 5;
	v->a[37065] = sym_file_descriptor;
	v->a[37066] = sym__concat;
	v->a[37067] = sym_test_operator;
	v->a[37068] = sym__brace_start;
	v->a[37069] = aux_sym_heredoc_redirect_token1;
	v->a[37070] = actions(3060);
	v->a[37071] = 35;
	v->a[37072] = anon_sym_esac;
	v->a[37073] = anon_sym_PIPE;
	v->a[37074] = anon_sym_SEMI_SEMI;
	v->a[37075] = anon_sym_SEMI_AMP;
	v->a[37076] = anon_sym_SEMI_SEMI_AMP;
	v->a[37077] = anon_sym_PIPE_AMP;
	v->a[37078] = anon_sym_AMP_AMP;
	v->a[37079] = anon_sym_PIPE_PIPE;
	small_parse_table_1854(v);
}

void	small_parse_table_1854(t_small_parse_table_array *v)
{
	v->a[37080] = anon_sym_LT;
	v->a[37081] = anon_sym_GT;
	v->a[37082] = anon_sym_GT_GT;
	v->a[37083] = anon_sym_AMP_GT;
	v->a[37084] = anon_sym_AMP_GT_GT;
	v->a[37085] = anon_sym_LT_AMP;
	v->a[37086] = anon_sym_GT_AMP;
	v->a[37087] = anon_sym_GT_PIPE;
	v->a[37088] = anon_sym_LT_AMP_DASH;
	v->a[37089] = anon_sym_GT_AMP_DASH;
	v->a[37090] = anon_sym_LT_LT;
	v->a[37091] = anon_sym_LT_LT_DASH;
	v->a[37092] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37093] = anon_sym_AMP;
	v->a[37094] = aux_sym_concatenation_token1;
	v->a[37095] = anon_sym_DOLLAR;
	v->a[37096] = sym__special_character;
	v->a[37097] = anon_sym_DQUOTE;
	v->a[37098] = sym_raw_string;
	v->a[37099] = aux_sym_number_token1;
	small_parse_table_1855(v);
}

/* EOF small_parse_table_370.c */

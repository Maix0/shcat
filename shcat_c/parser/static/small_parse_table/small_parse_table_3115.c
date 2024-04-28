/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3115.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15575(t_small_parse_table_array *v)
{
	v->a[311500] = state(6439);
	v->a[311501] = 1;
	v->a[311502] = aux_sym_concatenation_repeat1;
	v->a[311503] = state(6570);
	v->a[311504] = 1;
	v->a[311505] = aux_sym_case_item_repeat1;
	v->a[311506] = actions(14568);
	v->a[311507] = 2;
	v->a[311508] = sym__concat;
	v->a[311509] = aux_sym_concatenation_token1;
	v->a[311510] = 6;
	v->a[311511] = actions(71);
	v->a[311512] = 1;
	v->a[311513] = sym_comment;
	v->a[311514] = actions(14564);
	v->a[311515] = 1;
	v->a[311516] = anon_sym_PIPE;
	v->a[311517] = actions(14570);
	v->a[311518] = 1;
	v->a[311519] = anon_sym_RPAREN;
	small_parse_table_15576(v);
}

void	small_parse_table_15576(t_small_parse_table_array *v)
{
	v->a[311520] = state(6439);
	v->a[311521] = 1;
	v->a[311522] = aux_sym_concatenation_repeat1;
	v->a[311523] = state(6710);
	v->a[311524] = 1;
	v->a[311525] = aux_sym_case_item_repeat1;
	v->a[311526] = actions(14568);
	v->a[311527] = 2;
	v->a[311528] = sym__concat;
	v->a[311529] = aux_sym_concatenation_token1;
	v->a[311530] = 3;
	v->a[311531] = actions(3);
	v->a[311532] = 1;
	v->a[311533] = sym_comment;
	v->a[311534] = actions(1263);
	v->a[311535] = 1;
	v->a[311536] = aux_sym_heredoc_redirect_token1;
	v->a[311537] = actions(1261);
	v->a[311538] = 5;
	v->a[311539] = anon_sym_in;
	small_parse_table_15577(v);
}

void	small_parse_table_15577(t_small_parse_table_array *v)
{
	v->a[311540] = anon_sym_SEMI;
	v->a[311541] = anon_sym_AMP;
	v->a[311542] = anon_sym_SEMI_SEMI;
	v->a[311543] = sym__special_character;
	v->a[311544] = 6;
	v->a[311545] = actions(71);
	v->a[311546] = 1;
	v->a[311547] = sym_comment;
	v->a[311548] = actions(9018);
	v->a[311549] = 1;
	v->a[311550] = anon_sym_DOLLAR_LBRACE;
	v->a[311551] = actions(9020);
	v->a[311552] = 1;
	v->a[311553] = anon_sym_BQUOTE;
	v->a[311554] = actions(9022);
	v->a[311555] = 1;
	v->a[311556] = anon_sym_DOLLAR_BQUOTE;
	v->a[311557] = actions(14572);
	v->a[311558] = 1;
	v->a[311559] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_15578(v);
}

void	small_parse_table_15578(t_small_parse_table_array *v)
{
	v->a[311560] = state(1384);
	v->a[311561] = 2;
	v->a[311562] = sym_expansion;
	v->a[311563] = sym_command_substitution;
	v->a[311564] = 3;
	v->a[311565] = actions(3);
	v->a[311566] = 1;
	v->a[311567] = sym_comment;
	v->a[311568] = actions(1342);
	v->a[311569] = 2;
	v->a[311570] = sym_regex;
	v->a[311571] = aux_sym__expansion_regex_token1;
	v->a[311572] = actions(1340);
	v->a[311573] = 4;
	v->a[311574] = anon_sym_RPAREN;
	v->a[311575] = anon_sym_DQUOTE;
	v->a[311576] = sym_raw_string;
	v->a[311577] = anon_sym_RBRACE3;
	v->a[311578] = 6;
	v->a[311579] = actions(71);
	small_parse_table_15579(v);
}

void	small_parse_table_15579(t_small_parse_table_array *v)
{
	v->a[311580] = 1;
	v->a[311581] = sym_comment;
	v->a[311582] = actions(379);
	v->a[311583] = 1;
	v->a[311584] = anon_sym_DOLLAR_LBRACE;
	v->a[311585] = actions(385);
	v->a[311586] = 1;
	v->a[311587] = anon_sym_DOLLAR_BQUOTE;
	v->a[311588] = actions(5809);
	v->a[311589] = 1;
	v->a[311590] = anon_sym_BQUOTE;
	v->a[311591] = actions(14574);
	v->a[311592] = 1;
	v->a[311593] = anon_sym_DOLLAR_LPAREN;
	v->a[311594] = state(2697);
	v->a[311595] = 2;
	v->a[311596] = sym_expansion;
	v->a[311597] = sym_command_substitution;
	v->a[311598] = 6;
	v->a[311599] = actions(71);
	small_parse_table_15580(v);
}

/* EOF small_parse_table_3115.c */

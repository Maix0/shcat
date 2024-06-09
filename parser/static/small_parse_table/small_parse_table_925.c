/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_925.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4625(t_small_parse_table_array *v)
{
	v->a[92500] = 1;
	v->a[92501] = sym_heredoc_body;
	v->a[92502] = state(1278);
	v->a[92503] = 2;
	v->a[92504] = sym__heredoc_body;
	v->a[92505] = sym__simple_heredoc_body;
	v->a[92506] = 5;
	v->a[92507] = actions(1404);
	v->a[92508] = 1;
	v->a[92509] = sym_comment;
	v->a[92510] = actions(4206);
	v->a[92511] = 1;
	v->a[92512] = sym_simple_heredoc_body;
	v->a[92513] = actions(4208);
	v->a[92514] = 1;
	v->a[92515] = sym__heredoc_body_beginning;
	v->a[92516] = state(2151);
	v->a[92517] = 1;
	v->a[92518] = sym_heredoc_body;
	v->a[92519] = state(1152);
	small_parse_table_4626(v);
}

void	small_parse_table_4626(t_small_parse_table_array *v)
{
	v->a[92520] = 2;
	v->a[92521] = sym__heredoc_body;
	v->a[92522] = sym__simple_heredoc_body;
	v->a[92523] = 5;
	v->a[92524] = actions(1404);
	v->a[92525] = 1;
	v->a[92526] = sym_comment;
	v->a[92527] = actions(4267);
	v->a[92528] = 1;
	v->a[92529] = anon_sym_DOLLAR_LBRACE;
	v->a[92530] = actions(4269);
	v->a[92531] = 1;
	v->a[92532] = anon_sym_DOLLAR_LPAREN;
	v->a[92533] = actions(4271);
	v->a[92534] = 1;
	v->a[92535] = anon_sym_BQUOTE;
	v->a[92536] = state(407);
	v->a[92537] = 2;
	v->a[92538] = sym_expansion;
	v->a[92539] = sym_command_substitution;
	small_parse_table_4627(v);
}

void	small_parse_table_4627(t_small_parse_table_array *v)
{
	v->a[92540] = 4;
	v->a[92541] = actions(1404);
	v->a[92542] = 1;
	v->a[92543] = sym_comment;
	v->a[92544] = state(1931);
	v->a[92545] = 1;
	v->a[92546] = aux_sym_concatenation_repeat1;
	v->a[92547] = actions(1112);
	v->a[92548] = 2;
	v->a[92549] = anon_sym_PIPE;
	v->a[92550] = anon_sym_RPAREN;
	v->a[92551] = actions(4273);
	v->a[92552] = 2;
	v->a[92553] = sym__concat;
	v->a[92554] = aux_sym_concatenation_token1;
	v->a[92555] = 5;
	v->a[92556] = actions(1404);
	v->a[92557] = 1;
	v->a[92558] = sym_comment;
	v->a[92559] = actions(4276);
	small_parse_table_4628(v);
}

void	small_parse_table_4628(t_small_parse_table_array *v)
{
	v->a[92560] = 1;
	v->a[92561] = anon_sym_DOLLAR_LBRACE;
	v->a[92562] = actions(4278);
	v->a[92563] = 1;
	v->a[92564] = anon_sym_DOLLAR_LPAREN;
	v->a[92565] = actions(4280);
	v->a[92566] = 1;
	v->a[92567] = anon_sym_BQUOTE;
	v->a[92568] = state(1329);
	v->a[92569] = 2;
	v->a[92570] = sym_expansion;
	v->a[92571] = sym_command_substitution;
	v->a[92572] = 6;
	v->a[92573] = actions(1404);
	v->a[92574] = 1;
	v->a[92575] = sym_comment;
	v->a[92576] = actions(4208);
	v->a[92577] = 1;
	v->a[92578] = sym__heredoc_body_beginning;
	v->a[92579] = actions(4265);
	small_parse_table_4629(v);
}

void	small_parse_table_4629(t_small_parse_table_array *v)
{
	v->a[92580] = 1;
	v->a[92581] = sym_simple_heredoc_body;
	v->a[92582] = state(1259);
	v->a[92583] = 1;
	v->a[92584] = sym__simple_heredoc_body;
	v->a[92585] = state(1275);
	v->a[92586] = 1;
	v->a[92587] = sym__heredoc_body;
	v->a[92588] = state(2240);
	v->a[92589] = 1;
	v->a[92590] = sym_heredoc_body;
	v->a[92591] = 5;
	v->a[92592] = actions(1404);
	v->a[92593] = 1;
	v->a[92594] = sym_comment;
	v->a[92595] = actions(4282);
	v->a[92596] = 1;
	v->a[92597] = anon_sym_DOLLAR_LBRACE;
	v->a[92598] = actions(4284);
	v->a[92599] = 1;
	small_parse_table_4630(v);
}

/* EOF small_parse_table_925.c */

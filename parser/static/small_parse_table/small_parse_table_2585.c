/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2585.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12925(t_small_parse_table_array *v)
{
	v->a[258500] = 5;
	v->a[258501] = anon_sym_BANG;
	v->a[258502] = anon_sym_DOLLAR;
	v->a[258503] = anon_sym_POUND;
	v->a[258504] = anon_sym_0;
	v->a[258505] = anon_sym__;
	v->a[258506] = 16;
	v->a[258507] = actions(3);
	v->a[258508] = 1;
	v->a[258509] = sym_comment;
	v->a[258510] = actions(11760);
	v->a[258511] = 1;
	v->a[258512] = anon_sym_BANG2;
	v->a[258513] = actions(11764);
	v->a[258514] = 1;
	v->a[258515] = anon_sym_DOLLAR_LPAREN;
	v->a[258516] = actions(11766);
	v->a[258517] = 1;
	v->a[258518] = anon_sym_BQUOTE;
	v->a[258519] = actions(11768);
	small_parse_table_12926(v);
}

void	small_parse_table_12926(t_small_parse_table_array *v)
{
	v->a[258520] = 1;
	v->a[258521] = anon_sym_DOLLAR_BQUOTE;
	v->a[258522] = actions(11770);
	v->a[258523] = 1;
	v->a[258524] = aux_sym__simple_variable_name_token1;
	v->a[258525] = actions(11772);
	v->a[258526] = 1;
	v->a[258527] = sym_variable_name;
	v->a[258528] = actions(11903);
	v->a[258529] = 1;
	v->a[258530] = anon_sym_RBRACE3;
	v->a[258531] = state(3532);
	v->a[258532] = 1;
	v->a[258533] = sym_subscript;
	v->a[258534] = state(6428);
	v->a[258535] = 1;
	v->a[258536] = aux_sym__expansion_body_repeat1;
	v->a[258537] = state(6472);
	v->a[258538] = 1;
	v->a[258539] = sym_command_substitution;
	small_parse_table_12927(v);
}

void	small_parse_table_12927(t_small_parse_table_array *v)
{
	v->a[258540] = state(6900);
	v->a[258541] = 1;
	v->a[258542] = sym__expansion_body;
	v->a[258543] = actions(11762);
	v->a[258544] = 2;
	v->a[258545] = anon_sym_POUND2;
	v->a[258546] = anon_sym_EQ2;
	v->a[258547] = actions(8050);
	v->a[258548] = 3;
	v->a[258549] = sym__external_expansion_sym_hash;
	v->a[258550] = sym__external_expansion_sym_bang;
	v->a[258551] = sym__external_expansion_sym_equal;
	v->a[258552] = actions(11754);
	v->a[258553] = 4;
	v->a[258554] = anon_sym_DASH;
	v->a[258555] = anon_sym_STAR;
	v->a[258556] = anon_sym_QMARK;
	v->a[258557] = anon_sym_AT2;
	v->a[258558] = actions(11756);
	v->a[258559] = 5;
	small_parse_table_12928(v);
}

void	small_parse_table_12928(t_small_parse_table_array *v)
{
	v->a[258560] = anon_sym_BANG;
	v->a[258561] = anon_sym_DOLLAR;
	v->a[258562] = anon_sym_POUND;
	v->a[258563] = anon_sym_0;
	v->a[258564] = anon_sym__;
	v->a[258565] = 6;
	v->a[258566] = actions(3);
	v->a[258567] = 1;
	v->a[258568] = sym_comment;
	v->a[258569] = actions(11651);
	v->a[258570] = 1;
	v->a[258571] = aux_sym_concatenation_token1;
	v->a[258572] = actions(11653);
	v->a[258573] = 1;
	v->a[258574] = sym__concat;
	v->a[258575] = state(4635);
	v->a[258576] = 1;
	v->a[258577] = aux_sym_concatenation_repeat1;
	v->a[258578] = actions(2074);
	v->a[258579] = 2;
	small_parse_table_12929(v);
}

void	small_parse_table_12929(t_small_parse_table_array *v)
{
	v->a[258580] = sym_file_descriptor;
	v->a[258581] = aux_sym_heredoc_redirect_token1;
	v->a[258582] = actions(2072);
	v->a[258583] = 20;
	v->a[258584] = anon_sym_SEMI;
	v->a[258585] = anon_sym_PIPE_PIPE;
	v->a[258586] = anon_sym_AMP_AMP;
	v->a[258587] = anon_sym_PIPE;
	v->a[258588] = anon_sym_AMP;
	v->a[258589] = anon_sym_LT;
	v->a[258590] = anon_sym_GT;
	v->a[258591] = anon_sym_LT_LT;
	v->a[258592] = anon_sym_GT_GT;
	v->a[258593] = anon_sym_RPAREN;
	v->a[258594] = anon_sym_SEMI_SEMI;
	v->a[258595] = anon_sym_PIPE_AMP;
	v->a[258596] = anon_sym_AMP_GT;
	v->a[258597] = anon_sym_AMP_GT_GT;
	v->a[258598] = anon_sym_LT_AMP;
	v->a[258599] = anon_sym_GT_AMP;
	small_parse_table_12930(v);
}

/* EOF small_parse_table_2585.c */

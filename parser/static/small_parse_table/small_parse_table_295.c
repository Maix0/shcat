/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_295.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1475(t_small_parse_table_array *v)
{
	v->a[29500] = sym_number;
	v->a[29501] = anon_sym_DOLLAR_LBRACE;
	v->a[29502] = anon_sym_DOLLAR_LPAREN;
	v->a[29503] = anon_sym_BQUOTE;
	v->a[29504] = sym_word;
	v->a[29505] = anon_sym_SEMI;
	v->a[29506] = 3;
	v->a[29507] = actions(3);
	v->a[29508] = 1;
	v->a[29509] = sym_comment;
	v->a[29510] = actions(1163);
	v->a[29511] = 3;
	v->a[29512] = sym_file_descriptor;
	v->a[29513] = sym__concat;
	v->a[29514] = sym__bare_dollar;
	v->a[29515] = actions(1161);
	v->a[29516] = 31;
	v->a[29517] = anon_sym_LPAREN;
	v->a[29518] = anon_sym_PIPE;
	v->a[29519] = anon_sym_RPAREN;
	small_parse_table_1476(v);
}

void	small_parse_table_1476(t_small_parse_table_array *v)
{
	v->a[29520] = anon_sym_SEMI_SEMI;
	v->a[29521] = anon_sym_AMP_AMP;
	v->a[29522] = anon_sym_PIPE_PIPE;
	v->a[29523] = anon_sym_LT;
	v->a[29524] = anon_sym_GT;
	v->a[29525] = anon_sym_GT_GT;
	v->a[29526] = anon_sym_AMP_GT;
	v->a[29527] = anon_sym_AMP_GT_GT;
	v->a[29528] = anon_sym_LT_AMP;
	v->a[29529] = anon_sym_GT_AMP;
	v->a[29530] = anon_sym_GT_PIPE;
	v->a[29531] = anon_sym_LT_AMP_DASH;
	v->a[29532] = anon_sym_GT_AMP_DASH;
	v->a[29533] = anon_sym_LT_LT;
	v->a[29534] = anon_sym_LT_LT_DASH;
	v->a[29535] = aux_sym_heredoc_redirect_token1;
	v->a[29536] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29537] = anon_sym_AMP;
	v->a[29538] = aux_sym_concatenation_token1;
	v->a[29539] = anon_sym_DOLLAR;
	small_parse_table_1477(v);
}

void	small_parse_table_1477(t_small_parse_table_array *v)
{
	v->a[29540] = anon_sym_DQUOTE;
	v->a[29541] = sym_raw_string;
	v->a[29542] = sym_number;
	v->a[29543] = anon_sym_DOLLAR_LBRACE;
	v->a[29544] = anon_sym_DOLLAR_LPAREN;
	v->a[29545] = anon_sym_BQUOTE;
	v->a[29546] = sym_word;
	v->a[29547] = anon_sym_SEMI;
	v->a[29548] = 6;
	v->a[29549] = actions(3);
	v->a[29550] = 1;
	v->a[29551] = sym_comment;
	v->a[29552] = actions(1118);
	v->a[29553] = 1;
	v->a[29554] = aux_sym_concatenation_token1;
	v->a[29555] = actions(1165);
	v->a[29556] = 1;
	v->a[29557] = sym__concat;
	v->a[29558] = state(314);
	v->a[29559] = 1;
	small_parse_table_1478(v);
}

void	small_parse_table_1478(t_small_parse_table_array *v)
{
	v->a[29560] = aux_sym_concatenation_repeat1;
	v->a[29561] = actions(543);
	v->a[29562] = 2;
	v->a[29563] = sym_file_descriptor;
	v->a[29564] = sym_variable_name;
	v->a[29565] = actions(541);
	v->a[29566] = 29;
	v->a[29567] = anon_sym_PIPE;
	v->a[29568] = anon_sym_RPAREN;
	v->a[29569] = anon_sym_SEMI_SEMI;
	v->a[29570] = anon_sym_AMP_AMP;
	v->a[29571] = anon_sym_PIPE_PIPE;
	v->a[29572] = anon_sym_LT;
	v->a[29573] = anon_sym_GT;
	v->a[29574] = anon_sym_GT_GT;
	v->a[29575] = anon_sym_AMP_GT;
	v->a[29576] = anon_sym_AMP_GT_GT;
	v->a[29577] = anon_sym_LT_AMP;
	v->a[29578] = anon_sym_GT_AMP;
	v->a[29579] = anon_sym_GT_PIPE;
	small_parse_table_1479(v);
}

void	small_parse_table_1479(t_small_parse_table_array *v)
{
	v->a[29580] = anon_sym_LT_AMP_DASH;
	v->a[29581] = anon_sym_GT_AMP_DASH;
	v->a[29582] = anon_sym_LT_LT;
	v->a[29583] = anon_sym_LT_LT_DASH;
	v->a[29584] = aux_sym_heredoc_redirect_token1;
	v->a[29585] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29586] = anon_sym_AMP;
	v->a[29587] = anon_sym_DOLLAR;
	v->a[29588] = anon_sym_DQUOTE;
	v->a[29589] = sym_raw_string;
	v->a[29590] = sym_number;
	v->a[29591] = anon_sym_DOLLAR_LBRACE;
	v->a[29592] = anon_sym_DOLLAR_LPAREN;
	v->a[29593] = anon_sym_BQUOTE;
	v->a[29594] = sym_word;
	v->a[29595] = anon_sym_SEMI;
	v->a[29596] = 6;
	v->a[29597] = actions(3);
	v->a[29598] = 1;
	v->a[29599] = sym_comment;
	small_parse_table_1480(v);
}

/* EOF small_parse_table_295.c */

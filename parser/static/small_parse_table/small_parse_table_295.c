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
	v->a[29500] = anon_sym_DQUOTE;
	v->a[29501] = sym_raw_string;
	v->a[29502] = sym_number;
	v->a[29503] = anon_sym_DOLLAR_LBRACE;
	v->a[29504] = anon_sym_DOLLAR_LPAREN;
	v->a[29505] = anon_sym_BQUOTE;
	v->a[29506] = sym_word;
	v->a[29507] = anon_sym_SEMI;
	v->a[29508] = 8;
	v->a[29509] = actions(3);
	v->a[29510] = 1;
	v->a[29511] = sym_comment;
	v->a[29512] = actions(736);
	v->a[29513] = 1;
	v->a[29514] = anon_sym_PIPE;
	v->a[29515] = actions(746);
	v->a[29516] = 1;
	v->a[29517] = sym_file_descriptor;
	v->a[29518] = actions(992);
	v->a[29519] = 1;
	small_parse_table_1476(v);
}

void	small_parse_table_1476(t_small_parse_table_array *v)
{
	v->a[29520] = sym_variable_name;
	v->a[29521] = state(1030);
	v->a[29522] = 2;
	v->a[29523] = sym_variable_assignment;
	v->a[29524] = aux_sym__variable_assignments_repeat1;
	v->a[29525] = state(1059);
	v->a[29526] = 3;
	v->a[29527] = sym_file_redirect;
	v->a[29528] = sym_heredoc_redirect;
	v->a[29529] = aux_sym_redirected_statement_repeat1;
	v->a[29530] = actions(960);
	v->a[29531] = 8;
	v->a[29532] = anon_sym_SEMI_SEMI;
	v->a[29533] = anon_sym_AMP_AMP;
	v->a[29534] = anon_sym_PIPE_PIPE;
	v->a[29535] = anon_sym_LT_LT;
	v->a[29536] = anon_sym_LT_LT_DASH;
	v->a[29537] = aux_sym_heredoc_redirect_token1;
	v->a[29538] = anon_sym_AMP;
	v->a[29539] = anon_sym_SEMI;
	small_parse_table_1477(v);
}

void	small_parse_table_1477(t_small_parse_table_array *v)
{
	v->a[29540] = actions(734);
	v->a[29541] = 16;
	v->a[29542] = anon_sym_LT;
	v->a[29543] = anon_sym_GT;
	v->a[29544] = anon_sym_GT_GT;
	v->a[29545] = anon_sym_LT_AMP;
	v->a[29546] = anon_sym_GT_AMP;
	v->a[29547] = anon_sym_GT_PIPE;
	v->a[29548] = anon_sym_LT_GT;
	v->a[29549] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29550] = anon_sym_DOLLAR;
	v->a[29551] = anon_sym_DQUOTE;
	v->a[29552] = sym_raw_string;
	v->a[29553] = sym_number;
	v->a[29554] = anon_sym_DOLLAR_LBRACE;
	v->a[29555] = anon_sym_DOLLAR_LPAREN;
	v->a[29556] = anon_sym_BQUOTE;
	v->a[29557] = sym_word;
	v->a[29558] = 6;
	v->a[29559] = actions(3);
	small_parse_table_1478(v);
}

void	small_parse_table_1478(t_small_parse_table_array *v)
{
	v->a[29560] = 1;
	v->a[29561] = sym_comment;
	v->a[29562] = actions(1112);
	v->a[29563] = 1;
	v->a[29564] = aux_sym_concatenation_token1;
	v->a[29565] = actions(1116);
	v->a[29566] = 1;
	v->a[29567] = sym__concat;
	v->a[29568] = state(357);
	v->a[29569] = 1;
	v->a[29570] = aux_sym_concatenation_repeat1;
	v->a[29571] = actions(1055);
	v->a[29572] = 2;
	v->a[29573] = sym_file_descriptor;
	v->a[29574] = sym__bare_dollar;
	v->a[29575] = actions(1057);
	v->a[29576] = 27;
	v->a[29577] = anon_sym_esac;
	v->a[29578] = anon_sym_LPAREN;
	v->a[29579] = anon_sym_PIPE;
	small_parse_table_1479(v);
}

void	small_parse_table_1479(t_small_parse_table_array *v)
{
	v->a[29580] = anon_sym_SEMI_SEMI;
	v->a[29581] = anon_sym_AMP_AMP;
	v->a[29582] = anon_sym_PIPE_PIPE;
	v->a[29583] = anon_sym_LT;
	v->a[29584] = anon_sym_GT;
	v->a[29585] = anon_sym_GT_GT;
	v->a[29586] = anon_sym_LT_AMP;
	v->a[29587] = anon_sym_GT_AMP;
	v->a[29588] = anon_sym_GT_PIPE;
	v->a[29589] = anon_sym_LT_GT;
	v->a[29590] = anon_sym_LT_LT;
	v->a[29591] = anon_sym_LT_LT_DASH;
	v->a[29592] = aux_sym_heredoc_redirect_token1;
	v->a[29593] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29594] = anon_sym_AMP;
	v->a[29595] = anon_sym_DOLLAR;
	v->a[29596] = anon_sym_DQUOTE;
	v->a[29597] = sym_raw_string;
	v->a[29598] = sym_number;
	v->a[29599] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1480(v);
}

/* EOF small_parse_table_295.c */

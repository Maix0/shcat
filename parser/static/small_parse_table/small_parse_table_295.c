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
	v->a[29500] = actions(1124);
	v->a[29501] = 13;
	v->a[29502] = anon_sym_PIPE;
	v->a[29503] = anon_sym_EQ;
	v->a[29504] = anon_sym_LT;
	v->a[29505] = anon_sym_GT;
	v->a[29506] = anon_sym_GT_GT;
	v->a[29507] = anon_sym_LT_LT;
	v->a[29508] = anon_sym_CARET;
	v->a[29509] = anon_sym_AMP;
	v->a[29510] = anon_sym_PLUS;
	v->a[29511] = anon_sym_DASH;
	v->a[29512] = anon_sym_STAR;
	v->a[29513] = anon_sym_SLASH;
	v->a[29514] = anon_sym_PERCENT;
	v->a[29515] = actions(1126);
	v->a[29516] = 21;
	v->a[29517] = anon_sym_AMP_AMP;
	v->a[29518] = anon_sym_PIPE_PIPE;
	v->a[29519] = anon_sym_RPAREN_RPAREN;
	small_parse_table_1476(v);
}

void	small_parse_table_1476(t_small_parse_table_array *v)
{
	v->a[29520] = anon_sym_PLUS_EQ;
	v->a[29521] = anon_sym_DASH_EQ;
	v->a[29522] = anon_sym_STAR_EQ;
	v->a[29523] = anon_sym_SLASH_EQ;
	v->a[29524] = anon_sym_PERCENT_EQ;
	v->a[29525] = anon_sym_LT_LT_EQ;
	v->a[29526] = anon_sym_GT_GT_EQ;
	v->a[29527] = anon_sym_AMP_EQ;
	v->a[29528] = anon_sym_CARET_EQ;
	v->a[29529] = anon_sym_PIPE_EQ;
	v->a[29530] = anon_sym_EQ_EQ;
	v->a[29531] = anon_sym_BANG_EQ;
	v->a[29532] = anon_sym_LT_EQ;
	v->a[29533] = anon_sym_GT_EQ;
	v->a[29534] = anon_sym_QMARK;
	v->a[29535] = anon_sym_COLON;
	v->a[29536] = anon_sym_PLUS_PLUS2;
	v->a[29537] = anon_sym_DASH_DASH2;
	v->a[29538] = 6;
	v->a[29539] = actions(3);
	small_parse_table_1477(v);
}

void	small_parse_table_1477(t_small_parse_table_array *v)
{
	v->a[29540] = 1;
	v->a[29541] = sym_comment;
	v->a[29542] = actions(1082);
	v->a[29543] = 1;
	v->a[29544] = aux_sym_concatenation_token1;
	v->a[29545] = actions(1132);
	v->a[29546] = 1;
	v->a[29547] = sym__concat;
	v->a[29548] = state(320);
	v->a[29549] = 1;
	v->a[29550] = aux_sym_concatenation_repeat1;
	v->a[29551] = actions(1128);
	v->a[29552] = 3;
	v->a[29553] = sym_file_descriptor;
	v->a[29554] = sym__bare_dollar;
	v->a[29555] = ts_builtin_sym_end;
	v->a[29556] = actions(1130);
	v->a[29557] = 28;
	v->a[29558] = anon_sym_PIPE;
	v->a[29559] = anon_sym_SEMI_SEMI;
	small_parse_table_1478(v);
}

void	small_parse_table_1478(t_small_parse_table_array *v)
{
	v->a[29560] = anon_sym_AMP_AMP;
	v->a[29561] = anon_sym_PIPE_PIPE;
	v->a[29562] = anon_sym_LT;
	v->a[29563] = anon_sym_GT;
	v->a[29564] = anon_sym_GT_GT;
	v->a[29565] = anon_sym_AMP_GT;
	v->a[29566] = anon_sym_AMP_GT_GT;
	v->a[29567] = anon_sym_LT_AMP;
	v->a[29568] = anon_sym_GT_AMP;
	v->a[29569] = anon_sym_GT_PIPE;
	v->a[29570] = anon_sym_LT_AMP_DASH;
	v->a[29571] = anon_sym_GT_AMP_DASH;
	v->a[29572] = anon_sym_LT_LT;
	v->a[29573] = anon_sym_LT_LT_DASH;
	v->a[29574] = aux_sym_heredoc_redirect_token1;
	v->a[29575] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29576] = anon_sym_AMP;
	v->a[29577] = anon_sym_DOLLAR;
	v->a[29578] = anon_sym_DQUOTE;
	v->a[29579] = sym_raw_string;
	small_parse_table_1479(v);
}

void	small_parse_table_1479(t_small_parse_table_array *v)
{
	v->a[29580] = sym_number;
	v->a[29581] = anon_sym_DOLLAR_LBRACE;
	v->a[29582] = anon_sym_DOLLAR_LPAREN;
	v->a[29583] = anon_sym_BQUOTE;
	v->a[29584] = sym_word;
	v->a[29585] = anon_sym_SEMI;
	v->a[29586] = 6;
	v->a[29587] = actions(3);
	v->a[29588] = 1;
	v->a[29589] = sym_comment;
	v->a[29590] = actions(1038);
	v->a[29591] = 1;
	v->a[29592] = aux_sym_concatenation_token1;
	v->a[29593] = actions(1134);
	v->a[29594] = 1;
	v->a[29595] = sym__concat;
	v->a[29596] = state(305);
	v->a[29597] = 1;
	v->a[29598] = aux_sym_concatenation_repeat1;
	v->a[29599] = actions(1128);
	small_parse_table_1480(v);
}

/* EOF small_parse_table_295.c */

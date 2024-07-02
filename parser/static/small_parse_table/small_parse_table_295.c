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
	v->a[29500] = 1;
	v->a[29501] = sym_subshell;
	v->a[29502] = actions(1112);
	v->a[29503] = 3;
	v->a[29504] = sym_raw_string;
	v->a[29505] = sym_number;
	v->a[29506] = sym_word;
	v->a[29507] = state(826);
	v->a[29508] = 5;
	v->a[29509] = sym_arithmetic_expansion;
	v->a[29510] = sym_string;
	v->a[29511] = sym_simple_expansion;
	v->a[29512] = sym_expansion;
	v->a[29513] = sym_command_substitution;
	v->a[29514] = actions(439);
	v->a[29515] = 12;
	v->a[29516] = anon_sym_PIPE;
	v->a[29517] = anon_sym_AMP_AMP;
	v->a[29518] = anon_sym_PIPE_PIPE;
	v->a[29519] = anon_sym_LT;
	small_parse_table_1476(v);
}

void	small_parse_table_1476(t_small_parse_table_array *v)
{
	v->a[29520] = anon_sym_GT;
	v->a[29521] = anon_sym_GT_GT;
	v->a[29522] = anon_sym_LT_AMP;
	v->a[29523] = anon_sym_GT_AMP;
	v->a[29524] = anon_sym_GT_PIPE;
	v->a[29525] = anon_sym_LT_GT;
	v->a[29526] = anon_sym_LT_LT;
	v->a[29527] = anon_sym_LT_LT_DASH;
	v->a[29528] = 6;
	v->a[29529] = actions(3);
	v->a[29530] = 1;
	v->a[29531] = sym_comment;
	v->a[29532] = actions(1085);
	v->a[29533] = 1;
	v->a[29534] = aux_sym_concatenation_token1;
	v->a[29535] = actions(1128);
	v->a[29536] = 1;
	v->a[29537] = sym__concat;
	v->a[29538] = state(362);
	v->a[29539] = 1;
	small_parse_table_1477(v);
}

void	small_parse_table_1477(t_small_parse_table_array *v)
{
	v->a[29540] = aux_sym_concatenation_repeat1;
	v->a[29541] = actions(1043);
	v->a[29542] = 2;
	v->a[29543] = sym_file_descriptor;
	v->a[29544] = sym__bare_dollar;
	v->a[29545] = actions(1045);
	v->a[29546] = 27;
	v->a[29547] = anon_sym_esac;
	v->a[29548] = anon_sym_LPAREN;
	v->a[29549] = anon_sym_PIPE;
	v->a[29550] = anon_sym_SEMI_SEMI;
	v->a[29551] = anon_sym_AMP_AMP;
	v->a[29552] = anon_sym_PIPE_PIPE;
	v->a[29553] = anon_sym_LT;
	v->a[29554] = anon_sym_GT;
	v->a[29555] = anon_sym_GT_GT;
	v->a[29556] = anon_sym_LT_AMP;
	v->a[29557] = anon_sym_GT_AMP;
	v->a[29558] = anon_sym_GT_PIPE;
	v->a[29559] = anon_sym_LT_GT;
	small_parse_table_1478(v);
}

void	small_parse_table_1478(t_small_parse_table_array *v)
{
	v->a[29560] = anon_sym_LT_LT;
	v->a[29561] = anon_sym_LT_LT_DASH;
	v->a[29562] = aux_sym_heredoc_redirect_token1;
	v->a[29563] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29564] = anon_sym_AMP;
	v->a[29565] = anon_sym_DOLLAR;
	v->a[29566] = anon_sym_DQUOTE;
	v->a[29567] = sym_raw_string;
	v->a[29568] = sym_number;
	v->a[29569] = anon_sym_DOLLAR_LBRACE;
	v->a[29570] = anon_sym_DOLLAR_LPAREN;
	v->a[29571] = anon_sym_BQUOTE;
	v->a[29572] = sym_word;
	v->a[29573] = anon_sym_SEMI;
	v->a[29574] = 19;
	v->a[29575] = actions(3);
	v->a[29576] = 1;
	v->a[29577] = sym_comment;
	v->a[29578] = actions(1059);
	v->a[29579] = 1;
	small_parse_table_1479(v);
}

void	small_parse_table_1479(t_small_parse_table_array *v)
{
	v->a[29580] = anon_sym_PIPE;
	v->a[29581] = actions(1067);
	v->a[29582] = 1;
	v->a[29583] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29584] = actions(1069);
	v->a[29585] = 1;
	v->a[29586] = anon_sym_DOLLAR;
	v->a[29587] = actions(1071);
	v->a[29588] = 1;
	v->a[29589] = anon_sym_DQUOTE;
	v->a[29590] = actions(1073);
	v->a[29591] = 1;
	v->a[29592] = anon_sym_DOLLAR_LBRACE;
	v->a[29593] = actions(1075);
	v->a[29594] = 1;
	v->a[29595] = anon_sym_DOLLAR_LPAREN;
	v->a[29596] = actions(1077);
	v->a[29597] = 1;
	v->a[29598] = anon_sym_BQUOTE;
	v->a[29599] = actions(1079);
	small_parse_table_1480(v);
}

/* EOF small_parse_table_295.c */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_145.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_725(t_small_parse_table_array *v)
{
	v->a[14500] = 4;
	v->a[14501] = anon_sym_esac;
	v->a[14502] = anon_sym_SEMI_SEMI;
	v->a[14503] = anon_sym_SEMI_AMP;
	v->a[14504] = anon_sym_SEMI_SEMI_AMP;
	v->a[14505] = actions(2512);
	v->a[14506] = 22;
	v->a[14507] = anon_sym_LT;
	v->a[14508] = anon_sym_GT;
	v->a[14509] = anon_sym_GT_GT;
	v->a[14510] = anon_sym_AMP_GT;
	v->a[14511] = anon_sym_AMP_GT_GT;
	v->a[14512] = anon_sym_LT_AMP;
	v->a[14513] = anon_sym_GT_AMP;
	v->a[14514] = anon_sym_GT_PIPE;
	v->a[14515] = anon_sym_LT_AMP_DASH;
	v->a[14516] = anon_sym_GT_AMP_DASH;
	v->a[14517] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14518] = anon_sym_DOLLAR;
	v->a[14519] = sym__special_character;
	small_parse_table_726(v);
}

void	small_parse_table_726(t_small_parse_table_array *v)
{
	v->a[14520] = anon_sym_DQUOTE;
	v->a[14521] = sym_raw_string;
	v->a[14522] = aux_sym_number_token1;
	v->a[14523] = aux_sym_number_token2;
	v->a[14524] = anon_sym_DOLLAR_LBRACE;
	v->a[14525] = anon_sym_DOLLAR_LPAREN;
	v->a[14526] = anon_sym_BQUOTE;
	v->a[14527] = anon_sym_DOLLAR_BQUOTE;
	v->a[14528] = sym_word;
	v->a[14529] = 27;
	v->a[14530] = actions(3);
	v->a[14531] = 1;
	v->a[14532] = sym_comment;
	v->a[14533] = actions(2458);
	v->a[14534] = 1;
	v->a[14535] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14536] = actions(2460);
	v->a[14537] = 1;
	v->a[14538] = anon_sym_DOLLAR;
	v->a[14539] = actions(2462);
	small_parse_table_727(v);
}

void	small_parse_table_727(t_small_parse_table_array *v)
{
	v->a[14540] = 1;
	v->a[14541] = sym__special_character;
	v->a[14542] = actions(2464);
	v->a[14543] = 1;
	v->a[14544] = anon_sym_DQUOTE;
	v->a[14545] = actions(2466);
	v->a[14546] = 1;
	v->a[14547] = aux_sym_number_token1;
	v->a[14548] = actions(2468);
	v->a[14549] = 1;
	v->a[14550] = aux_sym_number_token2;
	v->a[14551] = actions(2470);
	v->a[14552] = 1;
	v->a[14553] = anon_sym_DOLLAR_LBRACE;
	v->a[14554] = actions(2472);
	v->a[14555] = 1;
	v->a[14556] = anon_sym_DOLLAR_LPAREN;
	v->a[14557] = actions(2474);
	v->a[14558] = 1;
	v->a[14559] = anon_sym_BQUOTE;
	small_parse_table_728(v);
}

void	small_parse_table_728(t_small_parse_table_array *v)
{
	v->a[14560] = actions(2476);
	v->a[14561] = 1;
	v->a[14562] = anon_sym_DOLLAR_BQUOTE;
	v->a[14563] = actions(2478);
	v->a[14564] = 1;
	v->a[14565] = sym_file_descriptor;
	v->a[14566] = actions(2480);
	v->a[14567] = 1;
	v->a[14568] = sym_test_operator;
	v->a[14569] = actions(2482);
	v->a[14570] = 1;
	v->a[14571] = sym__brace_start;
	v->a[14572] = actions(2531);
	v->a[14573] = 1;
	v->a[14574] = aux_sym_heredoc_redirect_token1;
	v->a[14575] = state(2063);
	v->a[14576] = 1;
	v->a[14577] = aux_sym__heredoc_command;
	v->a[14578] = state(2852);
	v->a[14579] = 1;
	small_parse_table_729(v);
}

void	small_parse_table_729(t_small_parse_table_array *v)
{
	v->a[14580] = aux_sym__literal_repeat1;
	v->a[14581] = state(2882);
	v->a[14582] = 1;
	v->a[14583] = sym_concatenation;
	v->a[14584] = state(3739);
	v->a[14585] = 1;
	v->a[14586] = sym__heredoc_expression;
	v->a[14587] = state(3740);
	v->a[14588] = 1;
	v->a[14589] = sym__heredoc_pipeline;
	v->a[14590] = actions(2446);
	v->a[14591] = 2;
	v->a[14592] = sym_raw_string;
	v->a[14593] = sym_word;
	v->a[14594] = actions(2448);
	v->a[14595] = 2;
	v->a[14596] = anon_sym_PIPE;
	v->a[14597] = anon_sym_PIPE_AMP;
	v->a[14598] = actions(2450);
	v->a[14599] = 2;
	small_parse_table_730(v);
}

/* EOF small_parse_table_145.c */

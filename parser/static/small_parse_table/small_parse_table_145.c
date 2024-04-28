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
	v->a[14500] = 9;
	v->a[14501] = sym_arithmetic_expansion;
	v->a[14502] = sym_brace_expression;
	v->a[14503] = sym_string;
	v->a[14504] = sym_translated_string;
	v->a[14505] = sym_number;
	v->a[14506] = sym_simple_expansion;
	v->a[14507] = sym_expansion;
	v->a[14508] = sym_command_substitution;
	v->a[14509] = sym_process_substitution;
	v->a[14510] = actions(2072);
	v->a[14511] = 21;
	v->a[14512] = anon_sym_SEMI;
	v->a[14513] = anon_sym_PIPE_PIPE;
	v->a[14514] = anon_sym_AMP_AMP;
	v->a[14515] = anon_sym_PIPE;
	v->a[14516] = anon_sym_AMP;
	v->a[14517] = anon_sym_LT;
	v->a[14518] = anon_sym_GT;
	v->a[14519] = anon_sym_LT_LT;
	small_parse_table_726(v);
}

void	small_parse_table_726(t_small_parse_table_array *v)
{
	v->a[14520] = anon_sym_GT_GT;
	v->a[14521] = anon_sym_SEMI_SEMI;
	v->a[14522] = anon_sym_SEMI_AMP;
	v->a[14523] = anon_sym_SEMI_SEMI_AMP;
	v->a[14524] = anon_sym_PIPE_AMP;
	v->a[14525] = anon_sym_AMP_GT;
	v->a[14526] = anon_sym_AMP_GT_GT;
	v->a[14527] = anon_sym_LT_AMP;
	v->a[14528] = anon_sym_GT_AMP;
	v->a[14529] = anon_sym_GT_PIPE;
	v->a[14530] = anon_sym_LT_AMP_DASH;
	v->a[14531] = anon_sym_GT_AMP_DASH;
	v->a[14532] = anon_sym_LT_LT_DASH;
	v->a[14533] = 21;
	v->a[14534] = actions(3);
	v->a[14535] = 1;
	v->a[14536] = sym_comment;
	v->a[14537] = actions(3365);
	v->a[14538] = 1;
	v->a[14539] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_727(v);
}

void	small_parse_table_727(t_small_parse_table_array *v)
{
	v->a[14540] = actions(3367);
	v->a[14541] = 1;
	v->a[14542] = anon_sym_DOLLAR;
	v->a[14543] = actions(3369);
	v->a[14544] = 1;
	v->a[14545] = sym__special_character;
	v->a[14546] = actions(3371);
	v->a[14547] = 1;
	v->a[14548] = anon_sym_DQUOTE;
	v->a[14549] = actions(3373);
	v->a[14550] = 1;
	v->a[14551] = aux_sym_number_token1;
	v->a[14552] = actions(3375);
	v->a[14553] = 1;
	v->a[14554] = aux_sym_number_token2;
	v->a[14555] = actions(3377);
	v->a[14556] = 1;
	v->a[14557] = anon_sym_DOLLAR_LBRACE;
	v->a[14558] = actions(3379);
	v->a[14559] = 1;
	small_parse_table_728(v);
}

void	small_parse_table_728(t_small_parse_table_array *v)
{
	v->a[14560] = anon_sym_DOLLAR_LPAREN;
	v->a[14561] = actions(3381);
	v->a[14562] = 1;
	v->a[14563] = anon_sym_BQUOTE;
	v->a[14564] = actions(3383);
	v->a[14565] = 1;
	v->a[14566] = anon_sym_DOLLAR_BQUOTE;
	v->a[14567] = actions(3387);
	v->a[14568] = 1;
	v->a[14569] = sym_test_operator;
	v->a[14570] = actions(3389);
	v->a[14571] = 1;
	v->a[14572] = sym__brace_start;
	v->a[14573] = state(4507);
	v->a[14574] = 1;
	v->a[14575] = aux_sym__literal_repeat1;
	v->a[14576] = state(4879);
	v->a[14577] = 1;
	v->a[14578] = sym_concatenation;
	v->a[14579] = actions(2496);
	small_parse_table_729(v);
}

void	small_parse_table_729(t_small_parse_table_array *v)
{
	v->a[14580] = 2;
	v->a[14581] = sym_file_descriptor;
	v->a[14582] = aux_sym_heredoc_redirect_token1;
	v->a[14583] = actions(3363);
	v->a[14584] = 2;
	v->a[14585] = anon_sym_LPAREN_LPAREN;
	v->a[14586] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14587] = actions(3385);
	v->a[14588] = 2;
	v->a[14589] = anon_sym_LT_LPAREN;
	v->a[14590] = anon_sym_GT_LPAREN;
	v->a[14591] = actions(3361);
	v->a[14592] = 3;
	v->a[14593] = sym_raw_string;
	v->a[14594] = sym_ansi_c_string;
	v->a[14595] = sym_word;
	v->a[14596] = state(4271);
	v->a[14597] = 9;
	v->a[14598] = sym_arithmetic_expansion;
	v->a[14599] = sym_brace_expression;
	small_parse_table_730(v);
}

/* EOF small_parse_table_145.c */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_655.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3275(t_small_parse_table_array *v)
{
	v->a[65500] = anon_sym_LT_LT_DASH;
	v->a[65501] = anon_sym_AMP;
	v->a[65502] = anon_sym_SEMI;
	v->a[65503] = 3;
	v->a[65504] = actions(3);
	v->a[65505] = 1;
	v->a[65506] = sym_comment;
	v->a[65507] = actions(2091);
	v->a[65508] = 2;
	v->a[65509] = sym_file_descriptor;
	v->a[65510] = aux_sym_heredoc_redirect_token1;
	v->a[65511] = actions(2093);
	v->a[65512] = 16;
	v->a[65513] = anon_sym_esac;
	v->a[65514] = anon_sym_PIPE;
	v->a[65515] = anon_sym_SEMI_SEMI;
	v->a[65516] = anon_sym_AMP_AMP;
	v->a[65517] = anon_sym_PIPE_PIPE;
	v->a[65518] = anon_sym_LT;
	v->a[65519] = anon_sym_GT;
	small_parse_table_3276(v);
}

void	small_parse_table_3276(t_small_parse_table_array *v)
{
	v->a[65520] = anon_sym_GT_GT;
	v->a[65521] = anon_sym_LT_AMP;
	v->a[65522] = anon_sym_GT_AMP;
	v->a[65523] = anon_sym_GT_PIPE;
	v->a[65524] = anon_sym_LT_GT;
	v->a[65525] = anon_sym_LT_LT;
	v->a[65526] = anon_sym_LT_LT_DASH;
	v->a[65527] = anon_sym_AMP;
	v->a[65528] = anon_sym_SEMI;
	v->a[65529] = 5;
	v->a[65530] = actions(664);
	v->a[65531] = 1;
	v->a[65532] = sym_comment;
	v->a[65533] = state(1266);
	v->a[65534] = 1;
	v->a[65535] = aux_sym_concatenation_repeat1;
	v->a[65536] = actions(2303);
	v->a[65537] = 2;
	v->a[65538] = sym__concat;
	v->a[65539] = aux_sym_concatenation_token1;
	small_parse_table_3277(v);
}

void	small_parse_table_3277(t_small_parse_table_array *v)
{
	v->a[65540] = actions(1088);
	v->a[65541] = 4;
	v->a[65542] = anon_sym_PIPE;
	v->a[65543] = anon_sym_LT;
	v->a[65544] = anon_sym_GT;
	v->a[65545] = anon_sym_LT_LT;
	v->a[65546] = actions(1093);
	v->a[65547] = 10;
	v->a[65548] = sym_file_descriptor;
	v->a[65549] = sym_variable_name;
	v->a[65550] = anon_sym_AMP_AMP;
	v->a[65551] = anon_sym_PIPE_PIPE;
	v->a[65552] = anon_sym_GT_GT;
	v->a[65553] = anon_sym_LT_AMP;
	v->a[65554] = anon_sym_GT_AMP;
	v->a[65555] = anon_sym_GT_PIPE;
	v->a[65556] = anon_sym_LT_GT;
	v->a[65557] = anon_sym_LT_LT_DASH;
	v->a[65558] = 10;
	v->a[65559] = actions(3);
	small_parse_table_3278(v);
}

void	small_parse_table_3278(t_small_parse_table_array *v)
{
	v->a[65560] = 1;
	v->a[65561] = sym_comment;
	v->a[65562] = actions(1130);
	v->a[65563] = 1;
	v->a[65564] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65565] = actions(1132);
	v->a[65566] = 1;
	v->a[65567] = anon_sym_DOLLAR;
	v->a[65568] = actions(1134);
	v->a[65569] = 1;
	v->a[65570] = anon_sym_DQUOTE;
	v->a[65571] = actions(1136);
	v->a[65572] = 1;
	v->a[65573] = anon_sym_DOLLAR_LBRACE;
	v->a[65574] = actions(1138);
	v->a[65575] = 1;
	v->a[65576] = anon_sym_DOLLAR_LPAREN;
	v->a[65577] = actions(1140);
	v->a[65578] = 1;
	v->a[65579] = anon_sym_BQUOTE;
	small_parse_table_3279(v);
}

void	small_parse_table_3279(t_small_parse_table_array *v)
{
	v->a[65580] = actions(2308);
	v->a[65581] = 1;
	v->a[65582] = sym__bare_dollar;
	v->a[65583] = actions(2306);
	v->a[65584] = 5;
	v->a[65585] = aux_sym_concatenation_token1;
	v->a[65586] = sym_raw_string;
	v->a[65587] = sym_number;
	v->a[65588] = sym__comment_word;
	v->a[65589] = sym_word;
	v->a[65590] = state(860);
	v->a[65591] = 5;
	v->a[65592] = sym_arithmetic_expansion;
	v->a[65593] = sym_string;
	v->a[65594] = sym_simple_expansion;
	v->a[65595] = sym_expansion;
	v->a[65596] = sym_command_substitution;
	v->a[65597] = 10;
	v->a[65598] = actions(3);
	v->a[65599] = 1;
	small_parse_table_3280(v);
}

/* EOF small_parse_table_655.c */

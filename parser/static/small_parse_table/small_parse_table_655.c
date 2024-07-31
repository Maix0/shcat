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
	v->a[65500] = anon_sym_DOLLAR;
	v->a[65501] = anon_sym_DQUOTE;
	v->a[65502] = sym_raw_string;
	v->a[65503] = sym_number;
	v->a[65504] = anon_sym_DOLLAR_LBRACE;
	v->a[65505] = anon_sym_DOLLAR_LPAREN;
	v->a[65506] = anon_sym_BQUOTE;
	v->a[65507] = sym_word;
	v->a[65508] = 8;
	v->a[65509] = actions(407);
	v->a[65510] = 1;
	v->a[65511] = sym_comment;
	v->a[65512] = actions(2893);
	v->a[65513] = 1;
	v->a[65514] = anon_sym_DOLLAR;
	v->a[65515] = actions(2895);
	v->a[65516] = 1;
	v->a[65517] = anon_sym_DOLLAR_LBRACE;
	v->a[65518] = actions(2897);
	v->a[65519] = 1;
	small_parse_table_3276(v);
}

void	small_parse_table_3276(t_small_parse_table_array *v)
{
	v->a[65520] = anon_sym_DOLLAR_LPAREN;
	v->a[65521] = actions(2899);
	v->a[65522] = 1;
	v->a[65523] = anon_sym_BQUOTE;
	v->a[65524] = actions(2905);
	v->a[65525] = 1;
	v->a[65526] = sym_heredoc_content;
	v->a[65527] = actions(2907);
	v->a[65528] = 1;
	v->a[65529] = sym_heredoc_end;
	v->a[65530] = state(1464);
	v->a[65531] = 4;
	v->a[65532] = sym_simple_expansion;
	v->a[65533] = sym_expansion;
	v->a[65534] = sym_command_substitution;
	v->a[65535] = aux_sym_heredoc_body_repeat1;
	v->a[65536] = 8;
	v->a[65537] = actions(407);
	v->a[65538] = 1;
	v->a[65539] = sym_comment;
	small_parse_table_3277(v);
}

void	small_parse_table_3277(t_small_parse_table_array *v)
{
	v->a[65540] = actions(2909);
	v->a[65541] = 1;
	v->a[65542] = anon_sym_DOLLAR;
	v->a[65543] = actions(2912);
	v->a[65544] = 1;
	v->a[65545] = anon_sym_DOLLAR_LBRACE;
	v->a[65546] = actions(2915);
	v->a[65547] = 1;
	v->a[65548] = anon_sym_DOLLAR_LPAREN;
	v->a[65549] = actions(2918);
	v->a[65550] = 1;
	v->a[65551] = anon_sym_BQUOTE;
	v->a[65552] = actions(2921);
	v->a[65553] = 1;
	v->a[65554] = sym_heredoc_content;
	v->a[65555] = actions(2924);
	v->a[65556] = 1;
	v->a[65557] = sym_heredoc_end;
	v->a[65558] = state(1467);
	v->a[65559] = 4;
	small_parse_table_3278(v);
}

void	small_parse_table_3278(t_small_parse_table_array *v)
{
	v->a[65560] = sym_simple_expansion;
	v->a[65561] = sym_expansion;
	v->a[65562] = sym_command_substitution;
	v->a[65563] = aux_sym_heredoc_body_repeat1;
	v->a[65564] = 7;
	v->a[65565] = actions(407);
	v->a[65566] = 1;
	v->a[65567] = sym_comment;
	v->a[65568] = actions(2928);
	v->a[65569] = 1;
	v->a[65570] = anon_sym_DQUOTE;
	v->a[65571] = actions(2930);
	v->a[65572] = 1;
	v->a[65573] = anon_sym_DOLLAR_LBRACE;
	v->a[65574] = actions(2932);
	v->a[65575] = 1;
	v->a[65576] = anon_sym_DOLLAR_LPAREN;
	v->a[65577] = actions(2934);
	v->a[65578] = 1;
	v->a[65579] = anon_sym_BQUOTE;
	small_parse_table_3279(v);
}

void	small_parse_table_3279(t_small_parse_table_array *v)
{
	v->a[65580] = actions(2926);
	v->a[65581] = 2;
	v->a[65582] = anon_sym_PIPE;
	v->a[65583] = anon_sym_RPAREN;
	v->a[65584] = state(1595);
	v->a[65585] = 3;
	v->a[65586] = sym_string;
	v->a[65587] = sym_expansion;
	v->a[65588] = sym_command_substitution;
	v->a[65589] = 8;
	v->a[65590] = actions(3);
	v->a[65591] = 1;
	v->a[65592] = sym_comment;
	v->a[65593] = actions(2936);
	v->a[65594] = 1;
	v->a[65595] = anon_sym_in;
	v->a[65596] = actions(2938);
	v->a[65597] = 1;
	v->a[65598] = aux_sym_heredoc_redirect_token1;
	v->a[65599] = actions(2940);
	small_parse_table_3280(v);
}

/* EOF small_parse_table_655.c */

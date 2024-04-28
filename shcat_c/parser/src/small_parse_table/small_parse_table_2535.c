/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2535.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12675(t_small_parse_table_array *v)
{
	v->a[253500] = actions(1330);
	v->a[253501] = 3;
	v->a[253502] = sym_file_descriptor;
	v->a[253503] = sym__concat;
	v->a[253504] = aux_sym_heredoc_redirect_token1;
	v->a[253505] = actions(1328);
	v->a[253506] = 23;
	v->a[253507] = anon_sym_SEMI;
	v->a[253508] = anon_sym_PIPE_PIPE;
	v->a[253509] = anon_sym_AMP_AMP;
	v->a[253510] = anon_sym_PIPE;
	v->a[253511] = anon_sym_AMP;
	v->a[253512] = anon_sym_LT;
	v->a[253513] = anon_sym_GT;
	v->a[253514] = anon_sym_LT_LT;
	v->a[253515] = anon_sym_GT_GT;
	v->a[253516] = anon_sym_esac;
	v->a[253517] = anon_sym_SEMI_SEMI;
	v->a[253518] = anon_sym_SEMI_AMP;
	v->a[253519] = anon_sym_SEMI_SEMI_AMP;
	small_parse_table_12676(v);
}

void	small_parse_table_12676(t_small_parse_table_array *v)
{
	v->a[253520] = anon_sym_PIPE_AMP;
	v->a[253521] = anon_sym_AMP_GT;
	v->a[253522] = anon_sym_AMP_GT_GT;
	v->a[253523] = anon_sym_LT_AMP;
	v->a[253524] = anon_sym_GT_AMP;
	v->a[253525] = anon_sym_GT_PIPE;
	v->a[253526] = anon_sym_LT_AMP_DASH;
	v->a[253527] = anon_sym_GT_AMP_DASH;
	v->a[253528] = anon_sym_LT_LT_DASH;
	v->a[253529] = aux_sym_concatenation_token1;
	v->a[253530] = 8;
	v->a[253531] = actions(3);
	v->a[253532] = 1;
	v->a[253533] = sym_comment;
	v->a[253534] = actions(11363);
	v->a[253535] = 1;
	v->a[253536] = aux_sym_heredoc_redirect_token1;
	v->a[253537] = actions(11700);
	v->a[253538] = 1;
	v->a[253539] = anon_sym_LT_LT_LT;
	small_parse_table_12677(v);
}

void	small_parse_table_12677(t_small_parse_table_array *v)
{
	v->a[253540] = actions(11702);
	v->a[253541] = 1;
	v->a[253542] = sym_file_descriptor;
	v->a[253543] = actions(11698);
	v->a[253544] = 2;
	v->a[253545] = anon_sym_LT_AMP_DASH;
	v->a[253546] = anon_sym_GT_AMP_DASH;
	v->a[253547] = state(4547);
	v->a[253548] = 3;
	v->a[253549] = sym_file_redirect;
	v->a[253550] = sym_herestring_redirect;
	v->a[253551] = aux_sym_redirected_statement_repeat2;
	v->a[253552] = actions(11696);
	v->a[253553] = 8;
	v->a[253554] = anon_sym_LT;
	v->a[253555] = anon_sym_GT;
	v->a[253556] = anon_sym_GT_GT;
	v->a[253557] = anon_sym_AMP_GT;
	v->a[253558] = anon_sym_AMP_GT_GT;
	v->a[253559] = anon_sym_LT_AMP;
	small_parse_table_12678(v);
}

void	small_parse_table_12678(t_small_parse_table_array *v)
{
	v->a[253560] = anon_sym_GT_AMP;
	v->a[253561] = anon_sym_GT_PIPE;
	v->a[253562] = actions(11357);
	v->a[253563] = 10;
	v->a[253564] = anon_sym_SEMI;
	v->a[253565] = anon_sym_PIPE_PIPE;
	v->a[253566] = anon_sym_AMP_AMP;
	v->a[253567] = anon_sym_PIPE;
	v->a[253568] = anon_sym_AMP;
	v->a[253569] = anon_sym_LT_LT;
	v->a[253570] = anon_sym_SEMI_SEMI;
	v->a[253571] = anon_sym_PIPE_AMP;
	v->a[253572] = anon_sym_LT_LT_DASH;
	v->a[253573] = anon_sym_BQUOTE;
	v->a[253574] = 6;
	v->a[253575] = actions(3);
	v->a[253576] = 1;
	v->a[253577] = sym_comment;
	v->a[253578] = actions(11704);
	v->a[253579] = 1;
	small_parse_table_12679(v);
}

void	small_parse_table_12679(t_small_parse_table_array *v)
{
	v->a[253580] = sym_variable_name;
	v->a[253581] = state(6757);
	v->a[253582] = 1;
	v->a[253583] = sym_subscript;
	v->a[253584] = state(4519);
	v->a[253585] = 2;
	v->a[253586] = sym_variable_assignment;
	v->a[253587] = aux_sym_variable_assignments_repeat1;
	v->a[253588] = actions(11329);
	v->a[253589] = 3;
	v->a[253590] = sym_file_descriptor;
	v->a[253591] = ts_builtin_sym_end;
	v->a[253592] = aux_sym_heredoc_redirect_token1;
	v->a[253593] = actions(11327);
	v->a[253594] = 19;
	v->a[253595] = anon_sym_SEMI;
	v->a[253596] = anon_sym_PIPE_PIPE;
	v->a[253597] = anon_sym_AMP_AMP;
	v->a[253598] = anon_sym_PIPE;
	v->a[253599] = anon_sym_AMP;
	small_parse_table_12680(v);
}

/* EOF small_parse_table_2535.c */

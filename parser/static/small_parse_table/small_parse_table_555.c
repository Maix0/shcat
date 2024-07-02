/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_555.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2775(t_small_parse_table_array *v)
{
	v->a[55500] = aux_sym_heredoc_redirect_token1;
	v->a[55501] = actions(1902);
	v->a[55502] = 1;
	v->a[55503] = sym_file_descriptor;
	v->a[55504] = state(656);
	v->a[55505] = 1;
	v->a[55506] = sym_terminator;
	v->a[55507] = actions(724);
	v->a[55508] = 2;
	v->a[55509] = anon_sym_esac;
	v->a[55510] = anon_sym_SEMI_SEMI;
	v->a[55511] = actions(759);
	v->a[55512] = 2;
	v->a[55513] = anon_sym_AMP_AMP;
	v->a[55514] = anon_sym_PIPE_PIPE;
	v->a[55515] = actions(761);
	v->a[55516] = 2;
	v->a[55517] = anon_sym_LT_LT;
	v->a[55518] = anon_sym_LT_LT_DASH;
	v->a[55519] = actions(763);
	small_parse_table_2776(v);
}

void	small_parse_table_2776(t_small_parse_table_array *v)
{
	v->a[55520] = 2;
	v->a[55521] = anon_sym_AMP;
	v->a[55522] = anon_sym_SEMI;
	v->a[55523] = state(1059);
	v->a[55524] = 3;
	v->a[55525] = sym_file_redirect;
	v->a[55526] = sym_heredoc_redirect;
	v->a[55527] = aux_sym_redirected_statement_repeat1;
	v->a[55528] = actions(1898);
	v->a[55529] = 7;
	v->a[55530] = anon_sym_LT;
	v->a[55531] = anon_sym_GT;
	v->a[55532] = anon_sym_GT_GT;
	v->a[55533] = anon_sym_LT_AMP;
	v->a[55534] = anon_sym_GT_AMP;
	v->a[55535] = anon_sym_GT_PIPE;
	v->a[55536] = anon_sym_LT_GT;
	v->a[55537] = 11;
	v->a[55538] = actions(3);
	v->a[55539] = 1;
	small_parse_table_2777(v);
}

void	small_parse_table_2777(t_small_parse_table_array *v)
{
	v->a[55540] = sym_comment;
	v->a[55541] = actions(692);
	v->a[55542] = 1;
	v->a[55543] = anon_sym_PIPE;
	v->a[55544] = actions(1900);
	v->a[55545] = 1;
	v->a[55546] = aux_sym_heredoc_redirect_token1;
	v->a[55547] = actions(1902);
	v->a[55548] = 1;
	v->a[55549] = sym_file_descriptor;
	v->a[55550] = state(655);
	v->a[55551] = 1;
	v->a[55552] = sym_terminator;
	v->a[55553] = actions(724);
	v->a[55554] = 2;
	v->a[55555] = anon_sym_esac;
	v->a[55556] = anon_sym_SEMI_SEMI;
	v->a[55557] = actions(759);
	v->a[55558] = 2;
	v->a[55559] = anon_sym_AMP_AMP;
	small_parse_table_2778(v);
}

void	small_parse_table_2778(t_small_parse_table_array *v)
{
	v->a[55560] = anon_sym_PIPE_PIPE;
	v->a[55561] = actions(761);
	v->a[55562] = 2;
	v->a[55563] = anon_sym_LT_LT;
	v->a[55564] = anon_sym_LT_LT_DASH;
	v->a[55565] = actions(763);
	v->a[55566] = 2;
	v->a[55567] = anon_sym_AMP;
	v->a[55568] = anon_sym_SEMI;
	v->a[55569] = state(1059);
	v->a[55570] = 3;
	v->a[55571] = sym_file_redirect;
	v->a[55572] = sym_heredoc_redirect;
	v->a[55573] = aux_sym_redirected_statement_repeat1;
	v->a[55574] = actions(1898);
	v->a[55575] = 7;
	v->a[55576] = anon_sym_LT;
	v->a[55577] = anon_sym_GT;
	v->a[55578] = anon_sym_GT_GT;
	v->a[55579] = anon_sym_LT_AMP;
	small_parse_table_2779(v);
}

void	small_parse_table_2779(t_small_parse_table_array *v)
{
	v->a[55580] = anon_sym_GT_AMP;
	v->a[55581] = anon_sym_GT_PIPE;
	v->a[55582] = anon_sym_LT_GT;
	v->a[55583] = 6;
	v->a[55584] = actions(3);
	v->a[55585] = 1;
	v->a[55586] = sym_comment;
	v->a[55587] = actions(1881);
	v->a[55588] = 1;
	v->a[55589] = aux_sym_concatenation_token1;
	v->a[55590] = actions(1904);
	v->a[55591] = 1;
	v->a[55592] = sym__concat;
	v->a[55593] = state(1000);
	v->a[55594] = 1;
	v->a[55595] = aux_sym_concatenation_repeat1;
	v->a[55596] = actions(1158);
	v->a[55597] = 3;
	v->a[55598] = sym_file_descriptor;
	v->a[55599] = sym_variable_name;
	small_parse_table_2780(v);
}

/* EOF small_parse_table_555.c */

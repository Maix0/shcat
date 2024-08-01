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
	v->a[55500] = anon_sym_DOLLAR_LBRACE;
	v->a[55501] = anon_sym_DOLLAR_LPAREN;
	v->a[55502] = anon_sym_BQUOTE;
	v->a[55503] = 8;
	v->a[55504] = actions(3);
	v->a[55505] = 1;
	v->a[55506] = sym_comment;
	v->a[55507] = actions(2870);
	v->a[55508] = 1;
	v->a[55509] = anon_sym_RPAREN;
	v->a[55510] = actions(2873);
	v->a[55511] = 1;
	v->a[55512] = anon_sym_RBRACE;
	v->a[55513] = actions(2875);
	v->a[55514] = 1;
	v->a[55515] = anon_sym_DQUOTE;
	v->a[55516] = actions(2878);
	v->a[55517] = 1;
	v->a[55518] = sym_raw_string;
	v->a[55519] = actions(2881);
	small_parse_table_2776(v);
}

void	small_parse_table_2776(t_small_parse_table_array *v)
{
	v->a[55520] = 1;
	v->a[55521] = aux_sym__expansion_regex_token1;
	v->a[55522] = actions(2884);
	v->a[55523] = 1;
	v->a[55524] = sym_regex;
	v->a[55525] = state(1380);
	v->a[55526] = 2;
	v->a[55527] = sym_string;
	v->a[55528] = aux_sym__expansion_regex_repeat1;
	v->a[55529] = 8;
	v->a[55530] = actions(3);
	v->a[55531] = 1;
	v->a[55532] = sym_comment;
	v->a[55533] = actions(2887);
	v->a[55534] = 1;
	v->a[55535] = anon_sym_in;
	v->a[55536] = actions(2889);
	v->a[55537] = 1;
	v->a[55538] = aux_sym_heredoc_redirect_token1;
	v->a[55539] = actions(2891);
	small_parse_table_2777(v);
}

void	small_parse_table_2777(t_small_parse_table_array *v)
{
	v->a[55540] = 1;
	v->a[55541] = aux_sym_concatenation_token1;
	v->a[55542] = actions(2893);
	v->a[55543] = 1;
	v->a[55544] = sym__concat;
	v->a[55545] = state(1437);
	v->a[55546] = 1;
	v->a[55547] = aux_sym_concatenation_repeat1;
	v->a[55548] = state(1599);
	v->a[55549] = 1;
	v->a[55550] = sym_terminator;
	v->a[55551] = actions(1348);
	v->a[55552] = 2;
	v->a[55553] = anon_sym_SEMI_SEMI;
	v->a[55554] = anon_sym_SEMI;
	v->a[55555] = 8;
	v->a[55556] = actions(3);
	v->a[55557] = 1;
	v->a[55558] = sym_comment;
	v->a[55559] = actions(1193);
	small_parse_table_2778(v);
}

void	small_parse_table_2778(t_small_parse_table_array *v)
{
	v->a[55560] = 1;
	v->a[55561] = anon_sym_RPAREN;
	v->a[55562] = actions(1198);
	v->a[55563] = 1;
	v->a[55564] = anon_sym_DQUOTE;
	v->a[55565] = actions(1202);
	v->a[55566] = 1;
	v->a[55567] = aux_sym__expansion_regex_token1;
	v->a[55568] = actions(2895);
	v->a[55569] = 1;
	v->a[55570] = anon_sym_RBRACE;
	v->a[55571] = actions(2897);
	v->a[55572] = 1;
	v->a[55573] = sym_raw_string;
	v->a[55574] = actions(2899);
	v->a[55575] = 1;
	v->a[55576] = sym_regex;
	v->a[55577] = state(1380);
	v->a[55578] = 2;
	v->a[55579] = sym_string;
	small_parse_table_2779(v);
}

void	small_parse_table_2779(t_small_parse_table_array *v)
{
	v->a[55580] = aux_sym__expansion_regex_repeat1;
	v->a[55581] = 5;
	v->a[55582] = actions(1436);
	v->a[55583] = 1;
	v->a[55584] = sym_comment;
	v->a[55585] = actions(1976);
	v->a[55586] = 1;
	v->a[55587] = anon_sym_PIPE;
	v->a[55588] = state(1385);
	v->a[55589] = 1;
	v->a[55590] = aux_sym_pipeline_repeat1;
	v->a[55591] = actions(1979);
	v->a[55592] = 2;
	v->a[55593] = anon_sym_LT;
	v->a[55594] = anon_sym_GT;
	v->a[55595] = actions(1974);
	v->a[55596] = 4;
	v->a[55597] = anon_sym_AMP_AMP;
	v->a[55598] = anon_sym_PIPE_PIPE;
	v->a[55599] = anon_sym_GT_GT;
	small_parse_table_2780(v);
}

/* EOF small_parse_table_555.c */

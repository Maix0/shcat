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
	v->a[55500] = sym_word;
	v->a[55501] = state(458);
	v->a[55502] = 5;
	v->a[55503] = sym_arithmetic_expansion;
	v->a[55504] = sym_string;
	v->a[55505] = sym_simple_expansion;
	v->a[55506] = sym_expansion;
	v->a[55507] = sym_command_substitution;
	v->a[55508] = 10;
	v->a[55509] = actions(3);
	v->a[55510] = 1;
	v->a[55511] = sym_comment;
	v->a[55512] = actions(2015);
	v->a[55513] = 1;
	v->a[55514] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55515] = actions(2019);
	v->a[55516] = 1;
	v->a[55517] = anon_sym_DQUOTE;
	v->a[55518] = actions(2021);
	v->a[55519] = 1;
	small_parse_table_2776(v);
}

void	small_parse_table_2776(t_small_parse_table_array *v)
{
	v->a[55520] = anon_sym_DOLLAR_LBRACE;
	v->a[55521] = actions(2023);
	v->a[55522] = 1;
	v->a[55523] = anon_sym_DOLLAR_LPAREN;
	v->a[55524] = actions(2025);
	v->a[55525] = 1;
	v->a[55526] = anon_sym_BQUOTE;
	v->a[55527] = actions(2027);
	v->a[55528] = 1;
	v->a[55529] = sym__bare_dollar;
	v->a[55530] = actions(2240);
	v->a[55531] = 1;
	v->a[55532] = anon_sym_DOLLAR;
	v->a[55533] = actions(2013);
	v->a[55534] = 5;
	v->a[55535] = aux_sym_concatenation_token1;
	v->a[55536] = sym_raw_string;
	v->a[55537] = sym_number;
	v->a[55538] = sym__comment_word;
	v->a[55539] = sym_word;
	small_parse_table_2777(v);
}

void	small_parse_table_2777(t_small_parse_table_array *v)
{
	v->a[55540] = state(395);
	v->a[55541] = 5;
	v->a[55542] = sym_arithmetic_expansion;
	v->a[55543] = sym_string;
	v->a[55544] = sym_simple_expansion;
	v->a[55545] = sym_expansion;
	v->a[55546] = sym_command_substitution;
	v->a[55547] = 10;
	v->a[55548] = actions(3);
	v->a[55549] = 1;
	v->a[55550] = sym_comment;
	v->a[55551] = actions(1922);
	v->a[55552] = 1;
	v->a[55553] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55554] = actions(1926);
	v->a[55555] = 1;
	v->a[55556] = anon_sym_DQUOTE;
	v->a[55557] = actions(1928);
	v->a[55558] = 1;
	v->a[55559] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2778(v);
}

void	small_parse_table_2778(t_small_parse_table_array *v)
{
	v->a[55560] = actions(1930);
	v->a[55561] = 1;
	v->a[55562] = anon_sym_DOLLAR_LPAREN;
	v->a[55563] = actions(1932);
	v->a[55564] = 1;
	v->a[55565] = anon_sym_BQUOTE;
	v->a[55566] = actions(1934);
	v->a[55567] = 1;
	v->a[55568] = sym__bare_dollar;
	v->a[55569] = actions(2242);
	v->a[55570] = 1;
	v->a[55571] = anon_sym_DOLLAR;
	v->a[55572] = actions(1920);
	v->a[55573] = 5;
	v->a[55574] = aux_sym_concatenation_token1;
	v->a[55575] = sym_raw_string;
	v->a[55576] = sym_number;
	v->a[55577] = sym__comment_word;
	v->a[55578] = sym_word;
	v->a[55579] = state(810);
	small_parse_table_2779(v);
}

void	small_parse_table_2779(t_small_parse_table_array *v)
{
	v->a[55580] = 5;
	v->a[55581] = sym_arithmetic_expansion;
	v->a[55582] = sym_string;
	v->a[55583] = sym_simple_expansion;
	v->a[55584] = sym_expansion;
	v->a[55585] = sym_command_substitution;
	v->a[55586] = 10;
	v->a[55587] = actions(3);
	v->a[55588] = 1;
	v->a[55589] = sym_comment;
	v->a[55590] = actions(1922);
	v->a[55591] = 1;
	v->a[55592] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55593] = actions(1926);
	v->a[55594] = 1;
	v->a[55595] = anon_sym_DQUOTE;
	v->a[55596] = actions(1928);
	v->a[55597] = 1;
	v->a[55598] = anon_sym_DOLLAR_LBRACE;
	v->a[55599] = actions(1930);
	small_parse_table_2780(v);
}

/* EOF small_parse_table_555.c */

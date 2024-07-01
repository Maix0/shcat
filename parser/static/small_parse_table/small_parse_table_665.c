/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_665.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3325(t_small_parse_table_array *v)
{
	v->a[66500] = 1;
	v->a[66501] = anon_sym_DOLLAR;
	v->a[66502] = actions(2494);
	v->a[66503] = 1;
	v->a[66504] = anon_sym_DQUOTE;
	v->a[66505] = actions(2496);
	v->a[66506] = 1;
	v->a[66507] = anon_sym_DOLLAR_LBRACE;
	v->a[66508] = actions(2498);
	v->a[66509] = 1;
	v->a[66510] = anon_sym_DOLLAR_LPAREN;
	v->a[66511] = actions(2500);
	v->a[66512] = 1;
	v->a[66513] = anon_sym_BQUOTE;
	v->a[66514] = actions(2502);
	v->a[66515] = 1;
	v->a[66516] = sym__comment_word;
	v->a[66517] = actions(2504);
	v->a[66518] = 1;
	v->a[66519] = sym__empty_value;
	small_parse_table_3326(v);
}

void	small_parse_table_3326(t_small_parse_table_array *v)
{
	v->a[66520] = state(1248);
	v->a[66521] = 1;
	v->a[66522] = sym_concatenation;
	v->a[66523] = actions(2488);
	v->a[66524] = 3;
	v->a[66525] = sym_raw_string;
	v->a[66526] = sym_number;
	v->a[66527] = sym_word;
	v->a[66528] = state(1051);
	v->a[66529] = 5;
	v->a[66530] = sym_arithmetic_expansion;
	v->a[66531] = sym_string;
	v->a[66532] = sym_simple_expansion;
	v->a[66533] = sym_expansion;
	v->a[66534] = sym_command_substitution;
	v->a[66535] = 10;
	v->a[66536] = actions(3);
	v->a[66537] = 1;
	v->a[66538] = sym_comment;
	v->a[66539] = actions(1638);
	small_parse_table_3327(v);
}

void	small_parse_table_3327(t_small_parse_table_array *v)
{
	v->a[66540] = 1;
	v->a[66541] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66542] = actions(1642);
	v->a[66543] = 1;
	v->a[66544] = anon_sym_DQUOTE;
	v->a[66545] = actions(1644);
	v->a[66546] = 1;
	v->a[66547] = anon_sym_DOLLAR_LBRACE;
	v->a[66548] = actions(1646);
	v->a[66549] = 1;
	v->a[66550] = anon_sym_DOLLAR_LPAREN;
	v->a[66551] = actions(1648);
	v->a[66552] = 1;
	v->a[66553] = anon_sym_BQUOTE;
	v->a[66554] = actions(2508);
	v->a[66555] = 1;
	v->a[66556] = anon_sym_DOLLAR;
	v->a[66557] = actions(2510);
	v->a[66558] = 1;
	v->a[66559] = sym__bare_dollar;
	small_parse_table_3328(v);
}

void	small_parse_table_3328(t_small_parse_table_array *v)
{
	v->a[66560] = actions(2506);
	v->a[66561] = 5;
	v->a[66562] = aux_sym_concatenation_token1;
	v->a[66563] = sym_raw_string;
	v->a[66564] = sym_number;
	v->a[66565] = sym__comment_word;
	v->a[66566] = sym_word;
	v->a[66567] = state(1863);
	v->a[66568] = 5;
	v->a[66569] = sym_arithmetic_expansion;
	v->a[66570] = sym_string;
	v->a[66571] = sym_simple_expansion;
	v->a[66572] = sym_expansion;
	v->a[66573] = sym_command_substitution;
	v->a[66574] = 10;
	v->a[66575] = actions(3);
	v->a[66576] = 1;
	v->a[66577] = sym_comment;
	v->a[66578] = actions(2324);
	v->a[66579] = 1;
	small_parse_table_3329(v);
}

void	small_parse_table_3329(t_small_parse_table_array *v)
{
	v->a[66580] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66581] = actions(2328);
	v->a[66582] = 1;
	v->a[66583] = anon_sym_DQUOTE;
	v->a[66584] = actions(2330);
	v->a[66585] = 1;
	v->a[66586] = anon_sym_DOLLAR_LBRACE;
	v->a[66587] = actions(2332);
	v->a[66588] = 1;
	v->a[66589] = anon_sym_DOLLAR_LPAREN;
	v->a[66590] = actions(2334);
	v->a[66591] = 1;
	v->a[66592] = anon_sym_BQUOTE;
	v->a[66593] = actions(2336);
	v->a[66594] = 1;
	v->a[66595] = sym__bare_dollar;
	v->a[66596] = actions(2512);
	v->a[66597] = 1;
	v->a[66598] = anon_sym_DOLLAR;
	v->a[66599] = actions(2322);
	small_parse_table_3330(v);
}

/* EOF small_parse_table_665.c */

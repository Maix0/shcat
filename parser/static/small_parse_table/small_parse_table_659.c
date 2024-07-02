/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_659.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3295(t_small_parse_table_array *v)
{
	v->a[65900] = sym_comment;
	v->a[65901] = actions(1641);
	v->a[65902] = 1;
	v->a[65903] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65904] = actions(1643);
	v->a[65905] = 1;
	v->a[65906] = anon_sym_DOLLAR;
	v->a[65907] = actions(1645);
	v->a[65908] = 1;
	v->a[65909] = anon_sym_DQUOTE;
	v->a[65910] = actions(1647);
	v->a[65911] = 1;
	v->a[65912] = anon_sym_DOLLAR_LBRACE;
	v->a[65913] = actions(1649);
	v->a[65914] = 1;
	v->a[65915] = anon_sym_DOLLAR_LPAREN;
	v->a[65916] = actions(1651);
	v->a[65917] = 1;
	v->a[65918] = anon_sym_BQUOTE;
	v->a[65919] = actions(1653);
	small_parse_table_3296(v);
}

void	small_parse_table_3296(t_small_parse_table_array *v)
{
	v->a[65920] = 1;
	v->a[65921] = sym_extglob_pattern;
	v->a[65922] = state(1878);
	v->a[65923] = 2;
	v->a[65924] = sym_concatenation;
	v->a[65925] = sym__extglob_blob;
	v->a[65926] = actions(2406);
	v->a[65927] = 3;
	v->a[65928] = sym_raw_string;
	v->a[65929] = sym_number;
	v->a[65930] = sym_word;
	v->a[65931] = state(1790);
	v->a[65932] = 5;
	v->a[65933] = sym_arithmetic_expansion;
	v->a[65934] = sym_string;
	v->a[65935] = sym_simple_expansion;
	v->a[65936] = sym_expansion;
	v->a[65937] = sym_command_substitution;
	v->a[65938] = 10;
	v->a[65939] = actions(3);
	small_parse_table_3297(v);
}

void	small_parse_table_3297(t_small_parse_table_array *v)
{
	v->a[65940] = 1;
	v->a[65941] = sym_comment;
	v->a[65942] = actions(2410);
	v->a[65943] = 1;
	v->a[65944] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65945] = actions(2412);
	v->a[65946] = 1;
	v->a[65947] = anon_sym_DOLLAR;
	v->a[65948] = actions(2414);
	v->a[65949] = 1;
	v->a[65950] = anon_sym_DQUOTE;
	v->a[65951] = actions(2416);
	v->a[65952] = 1;
	v->a[65953] = anon_sym_DOLLAR_LBRACE;
	v->a[65954] = actions(2418);
	v->a[65955] = 1;
	v->a[65956] = anon_sym_DOLLAR_LPAREN;
	v->a[65957] = actions(2420);
	v->a[65958] = 1;
	v->a[65959] = anon_sym_BQUOTE;
	small_parse_table_3298(v);
}

void	small_parse_table_3298(t_small_parse_table_array *v)
{
	v->a[65960] = actions(2422);
	v->a[65961] = 1;
	v->a[65962] = sym__bare_dollar;
	v->a[65963] = actions(2408);
	v->a[65964] = 5;
	v->a[65965] = aux_sym_concatenation_token1;
	v->a[65966] = sym_raw_string;
	v->a[65967] = sym_number;
	v->a[65968] = sym__comment_word;
	v->a[65969] = sym_word;
	v->a[65970] = state(491);
	v->a[65971] = 5;
	v->a[65972] = sym_arithmetic_expansion;
	v->a[65973] = sym_string;
	v->a[65974] = sym_simple_expansion;
	v->a[65975] = sym_expansion;
	v->a[65976] = sym_command_substitution;
	v->a[65977] = 12;
	v->a[65978] = actions(3);
	v->a[65979] = 1;
	small_parse_table_3299(v);
}

void	small_parse_table_3299(t_small_parse_table_array *v)
{
	v->a[65980] = sym_comment;
	v->a[65981] = actions(2426);
	v->a[65982] = 1;
	v->a[65983] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65984] = actions(2428);
	v->a[65985] = 1;
	v->a[65986] = anon_sym_DOLLAR;
	v->a[65987] = actions(2430);
	v->a[65988] = 1;
	v->a[65989] = anon_sym_DQUOTE;
	v->a[65990] = actions(2432);
	v->a[65991] = 1;
	v->a[65992] = anon_sym_DOLLAR_LBRACE;
	v->a[65993] = actions(2434);
	v->a[65994] = 1;
	v->a[65995] = anon_sym_DOLLAR_LPAREN;
	v->a[65996] = actions(2436);
	v->a[65997] = 1;
	v->a[65998] = anon_sym_BQUOTE;
	v->a[65999] = actions(2438);
	small_parse_table_3300(v);
}

/* EOF small_parse_table_659.c */

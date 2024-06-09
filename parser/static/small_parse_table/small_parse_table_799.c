/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_799.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3995(t_small_parse_table_array *v)
{
	v->a[79900] = actions(1027);
	v->a[79901] = 1;
	v->a[79902] = anon_sym_DOLLAR_LPAREN;
	v->a[79903] = actions(1029);
	v->a[79904] = 1;
	v->a[79905] = anon_sym_BQUOTE;
	v->a[79906] = actions(3304);
	v->a[79907] = 1;
	v->a[79908] = sym__bare_dollar;
	v->a[79909] = actions(3300);
	v->a[79910] = 3;
	v->a[79911] = sym_raw_string;
	v->a[79912] = sym__comment_word;
	v->a[79913] = sym_word;
	v->a[79914] = state(831);
	v->a[79915] = 6;
	v->a[79916] = sym_arithmetic_expansion;
	v->a[79917] = sym_string;
	v->a[79918] = sym_number;
	v->a[79919] = sym_simple_expansion;
	small_parse_table_3996(v);
}

void	small_parse_table_3996(t_small_parse_table_array *v)
{
	v->a[79920] = sym_expansion;
	v->a[79921] = sym_command_substitution;
	v->a[79922] = 12;
	v->a[79923] = actions(3);
	v->a[79924] = 1;
	v->a[79925] = sym_comment;
	v->a[79926] = actions(2905);
	v->a[79927] = 1;
	v->a[79928] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79929] = actions(2909);
	v->a[79930] = 1;
	v->a[79931] = anon_sym_DQUOTE;
	v->a[79932] = actions(2911);
	v->a[79933] = 1;
	v->a[79934] = aux_sym_number_token1;
	v->a[79935] = actions(2913);
	v->a[79936] = 1;
	v->a[79937] = aux_sym_number_token2;
	v->a[79938] = actions(2915);
	v->a[79939] = 1;
	small_parse_table_3997(v);
}

void	small_parse_table_3997(t_small_parse_table_array *v)
{
	v->a[79940] = anon_sym_DOLLAR_LBRACE;
	v->a[79941] = actions(2917);
	v->a[79942] = 1;
	v->a[79943] = anon_sym_DOLLAR_LPAREN;
	v->a[79944] = actions(2919);
	v->a[79945] = 1;
	v->a[79946] = anon_sym_BQUOTE;
	v->a[79947] = actions(3272);
	v->a[79948] = 1;
	v->a[79949] = sym__bare_dollar;
	v->a[79950] = actions(3308);
	v->a[79951] = 1;
	v->a[79952] = anon_sym_DOLLAR;
	v->a[79953] = actions(3270);
	v->a[79954] = 3;
	v->a[79955] = sym_raw_string;
	v->a[79956] = sym__comment_word;
	v->a[79957] = sym_word;
	v->a[79958] = state(532);
	v->a[79959] = 6;
	small_parse_table_3998(v);
}

void	small_parse_table_3998(t_small_parse_table_array *v)
{
	v->a[79960] = sym_arithmetic_expansion;
	v->a[79961] = sym_string;
	v->a[79962] = sym_number;
	v->a[79963] = sym_simple_expansion;
	v->a[79964] = sym_expansion;
	v->a[79965] = sym_command_substitution;
	v->a[79966] = 12;
	v->a[79967] = actions(3);
	v->a[79968] = 1;
	v->a[79969] = sym_comment;
	v->a[79970] = actions(779);
	v->a[79971] = 1;
	v->a[79972] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79973] = actions(781);
	v->a[79974] = 1;
	v->a[79975] = anon_sym_DOLLAR;
	v->a[79976] = actions(783);
	v->a[79977] = 1;
	v->a[79978] = anon_sym_DQUOTE;
	v->a[79979] = actions(785);
	small_parse_table_3999(v);
}

void	small_parse_table_3999(t_small_parse_table_array *v)
{
	v->a[79980] = 1;
	v->a[79981] = aux_sym_number_token1;
	v->a[79982] = actions(787);
	v->a[79983] = 1;
	v->a[79984] = aux_sym_number_token2;
	v->a[79985] = actions(789);
	v->a[79986] = 1;
	v->a[79987] = anon_sym_DOLLAR_LBRACE;
	v->a[79988] = actions(791);
	v->a[79989] = 1;
	v->a[79990] = anon_sym_DOLLAR_LPAREN;
	v->a[79991] = actions(793);
	v->a[79992] = 1;
	v->a[79993] = anon_sym_BQUOTE;
	v->a[79994] = actions(777);
	v->a[79995] = 2;
	v->a[79996] = sym_raw_string;
	v->a[79997] = sym_word;
	v->a[79998] = state(219);
	v->a[79999] = 2;
	small_parse_table_4000(v);
}

/* EOF small_parse_table_799.c */
